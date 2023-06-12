#include <stdio.h>
#include <string.h>

// Function to get a string input from the user using gets()
char* getString() {
    static char str[100];
    printf("Enter a string: ");
    gets(str);
    return str;
}

// Function to get an integer input from the user and return it
int getInt() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

// Function to calculate the sum of two integers
int add(int a, int b) {
    return a + b;
}

// Function to calculate the difference between two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to calculate the product of two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to calculate the quotient of two integers
float divide(int a, int b) {
    return (float)a / (float)b;
}

// Function to calculate the factorial of an integer
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if an integer is prime
int isPrime(int n) {
    int i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int i, j;
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

// Function to convert an integer to binary
void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

// Function to convert a binary number to decimal
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
   int max = arr[0];
   for (int i = 1; i < size; ++i) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }
   return max;
}

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
   int min = arr[0];
   for (int i = 1; i < size; ++i) {
      if (arr[i] < min) {
         min = arr[i];
      }
   }
   return min;
}

// Function to sort an array in ascending order using bubble sort
void bubbleSort(int arr[], int size) {
   int temp;

   for (int i = 0; i < size - 1; ++i) {
      for (int j = 0; j < size - i - 1; ++j) {
         if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

// Function to reverse a string
void reverseString(char str[]) {
   int length, c;
   char *begin, *end, temp;

   length = strlen(str);
   begin = str;
   end = str;

   for (c = 0; c < length - 1; c++) {
      end++;
   }

   for (c = 0; c < length / 2; c++) {
      temp = *end;
      *end = *begin;
      *begin = temp;

      begin++;
      end--;
   }
}

// Function to print the Fibonacci sequence up to a given number  
int fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
int areaOfRectangle(int length, int width) {
    return length * width;
}

// Function to calculate the area of a triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    char* str = getString();
    printf("You entered: %s\n", str);

    int num1 = getInt();
    int num2 = getInt();

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide(num1, num2));

    printf("%d! = %d\n", num1, factorial(num1));

    if (isPrime(num1)) {
        printf("%d is prime.\n", num1);
    } else {
        printf("%d is not prime.\n", num1);
    }

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    decimalToBinary(num1);
    printf("\n");

    int binaryNum = 101010;
    printf("%d in binary is %d in decimal.\n", binaryNum, binaryToDecimal(binaryNum));

    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Max element in array: %d\n", findMax(arr, size));
    printf("Min element in array: %d\n", findMin(arr, size));
    
    bubbleSort(arr, size);
    
    printf("Sorted array: ");
    
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    reverseString(str);
    
    printf("Reversed string: %s\n", str);

    fibonacci(num1);

    float radius = 5.0;
    
    printf("Area of circle with radius %.2f: %.2f\n", radius, areaOfCircle(radius));

    int length = 10;
    int width = 5;

    printf("Area of rectangle with length %d and width %d: %d\n", length, width, areaOfRectangle(length, width));

    float base = 6.0;
    float height = 4.0;

    printf("Area of triangle with base %.2f and height %.2f: %.2f\n", base, height, areaOfTriangle(base, height));

   return 0;
}
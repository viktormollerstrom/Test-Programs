#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to print a message
void printMessage() {
  printf("Hello, world!\n");
}

// Function to add two numbers
int addNumbers(int a, int b) {
  return a + b;
}

// Function to subtract two numbers
int subtractNumbers(int a, int b) {
  return a - b;
}

// Function to multiply two numbers
int multiplyNumbers(int a, int b) {
  return a * b;
}

// Function to divide two numbers
float divideNumbers(float a, float b) {
  return a / b;
}

// Function to generate a random number between 1 and 100
int generateRandomNumber() {
  srand(time(NULL));
  return rand() % 100 + 1;
}

// Function to check if a number is even
int isEven(int num) {
  return num % 2 == 0;
}

// Function to check if a number is odd
int isOdd(int num) {
  return num % 2 != 0;
}

// Function to check if a number is prime
int isPrime(int num) {
  if (num <= 1) {
    return 0;
  }
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

// Function to calculate the factorial of a number
int factorial(int num) {
  int result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }
  return result;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

// Function to reverse a number
int reverseNumber(int num) {
  int reversedNum = 0;
  while (num != 0) {
    reversedNum = reversedNum * 10 + num % 10;
    num /= 10;
  }
  return reversedNum;
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
  int i = 0, j = strlen(str) - 1;
  while (i < j) {
    if (str[i] != str[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

// Function to take an input from scanf and return it to the main program
int getInput() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}

// Function to convert a string to uppercase
void toUpperCase(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
    i++;
  }
}

// Function to convert a string to lowercase
void toLowerCase(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
    i++;
  }
}

// Function to find the length of a string
int stringLength(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

// Function to concatenate two strings
void stringConcat(char str1[], char str2[]) {
  int i = 0, j = 0;
  while (str1[i] != '\0') {
    i++;
  }
  while (str2[j] != '\0') {
    str1[i] = str2[j];
    i++;
    j++;
  }
  str1[i] = '\0';
}

int main() {
  printMessage();
  printf("2 + 3 = %d\n", addNumbers(2, 3));
  printf("5 - 2 = %d\n", subtractNumbers(5, 2));
  printf("4 * 6 = %d\n", multiplyNumbers(4, 6));
  printf("10 / 3 = %.2f\n", divideNumbers(10, 3));
  printf("Random number between 1  and 100: %d\n", generateRandomNumber());
  printf("Is 4 even? %d\n", isEven(4));
  printf("Is 5 odd? %d\n", isOdd(5));
  printf("Is 7 prime? %d\n", isPrime(7));
  printf("Factorial of 5: %d\n", factorial(5));
  printf("Sum of digits of 123: %d\n", sumOfDigits(123));
  printf("Reverse of 123: %d\n", reverseNumber(123));
  char str[] = "racecar";
  printf("Is %s a palindrome? %d\n", str, isPalindrome(str));
  int num = getInput();
  printf("You entered: %d\n", num);
  char str2[] = "Hello, world!";
  toUpperCase(str2);
  printf("Uppercase string: %s\n", str2);
  toLowerCase(str2);
  printf("Lowercase string: %s\n", str2);
  printf("Length of string \"%s\": %d\n", str2, stringLength(str2));
  char str3[100] = "Hello, ";
  char str4[] = "world!";
  stringConcat(str3, str4);
  printf("Concatenated string: %s\n", str3);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>



// Function 1: Takes input from scanf
int function1() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return num;
}

// Function 2: Random task
void function2() {
    printf("This is function 2.\n");
    // Perform some random task
}

// Function 3: Takes input from scanf
char function3() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return name;
}

// Function 4: Random task
void function4() {
    printf("This is function 4.\n");
    // Perform some random task
}

// Function 5: Takes input from scanf
float function5() {
    float value;
    printf("Enter a value: ");
    scanf("%f", &value);
    printf("The value you entered is: %.2f\n", value);
    return value;
}

// Function 6: Random task
void function6() {
    printf("This is function 6.\n");
    // Perform some random task
}

// Function 7: Takes input from scanf
int function7() {
    int num1, num2;
    int sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    
    return sum;
}

// Function 8: Random task
void function8() {
    printf("This is function 8.\n");
    // Perform some random task
}

// Function 9: Takes input from scanf
char function9() {
    char input[100];
    printf("Enter some text: ");
    scanf(" %[^\n]", input);
    printf("You entered: %s\n", input);
    return input;
}

// Function 10: Random task
void function10() {
    printf("This is function 10.\n");
    // Perform some random task
}

// Function 11: Takes input from scanf
double function11() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("The square root is: %.2lf\n", sqrt(num));
    return num;
}

// Function 12: Random task
void function12() {
    printf("This is function 12.\n");
    // Perform some random task
}

// Function 13: Takes input from scanf
char function13() {
    char sentence[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);
    printf("The sentence you entered is: %s\n", sentence);
    return sentence;
}

// Function 14: Random task
void function14() {
    printf("This is function 14.\n");
    // Perform some random task
}

// Function 15: Takes input from scanf
int function15() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is: %d\n", num, factorial(num));
    return num;
}

// Function 16: Random task
void function16() {
    printf("This is function 16.\n");
    // Perform some random task
}

// Function 17: Takes input from scanf
char function17() {
    char choice;
    printf("Enter your choice (Y/N): ");
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y') {
        printf("You chose Yes.\n");
    } else {
        printf("You chose No.\n");
    }
    return choice;
}

// Function 18: Random task
void function18() {
    printf("This is function 18.\n");
    // Perform some random task
}

// Function 19: Takes input from scanf
int function19() {
    int radius;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);
    printf("The area of the circle is: %.2f\n", 3.14 * radius * radius);
    return radius;
}

// Function 20: Random task
void function20() {
    printf("This is function 20.\n");
    // Perform some random task
}

// Factorial function
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Main function
int main() {
    int num1;
    char name;
    float value;
    int num2;
    char input;
    double doublenum;
    char sentence;
    num1 = function1();
    function2();
    name = function3();
    function4();
    value = function5();
    function6();
    num2 = function7();
    function8();
    input = function9();
    function10();
    doublenum = function11();
    function12();
    sentence = function13();
    function14();
    int number = function15();
    function16();
    char choice = function17();
    function18();
    int radius = function19();
    function20();

    return 0;
}
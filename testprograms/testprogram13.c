#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int get_integer() {
    int anInteger;
    printf("Enter an integer: ");
    scanf("%d", &anInteger);
    return anInteger;
}

float get_float() {
    float aFloat;
    printf("Enter a float: ");
    scanf("%f", &aFloat);
    return aFloat;
}

char get_char() {
    char aChar;
    printf("Enter a character: ");
    aChar = getch();
    printf("%c\n", aChar);
    return aChar;
}

void print_integer(int anInteger) {
    printf("The integer is: %d\n", anInteger);
}

void print_float(float aFloat) {
    printf("The float is: %f\n", aFloat);
}

void print_char(char aChar) {
    printf("The character is: %c\n", aChar);
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int anInteger = get_integer();
    float aFloat = get_float();
    char aChar = get_char();

    print_integer(anInteger);
    print_float(aFloat);
    print_char(aChar);

    int sum = add(anInteger, aFloat);
    int difference = subtract(anInteger, aFloat);
    float quotient = divide(anInteger, aFloat);

    printf("The sum of %d and %f is %d\n", anInteger, aFloat, sum);
    printf("The difference of %d and %f is %d\n", anInteger, aFloat, difference);
    printf("The quotient of %d and %f is %f\n", anInteger, aFloat, quotient);

    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    int fact = factorial(anInteger);

    printf("The factorial of %d is %d\n", anInteger, fact);

    return 0;
}
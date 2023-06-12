#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int get_integer() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

float get_float() {
    float num;
    printf("Enter a float: ");
    scanf("%f", &num);
    return num;
}

char get_char() {
    char c;
    printf("Enter a character: ");
    c = getchar();
    return c;
}

void print_integer(int num) {
    printf("The integer is: %d\n", num);
}

void print_float(float num) {
    printf("The float is: %f\n", num);
}

void print_char(char c) {
    printf("The character is: %c\n", c);
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float divide(float a, float b) {
    return a / b;
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

    return 0;
}
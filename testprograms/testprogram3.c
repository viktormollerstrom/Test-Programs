#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() { 
    int num1 = 1;
    int num2 = 2;
    int result = add_numbers(num1, num2);
    printf("The result is %d\n", result);
}

void welcome()
{
    printf("Welcome to the adder program!\n");
}

int factorial(int n) {
    int result = 1;
    int num4;
    while (n > 0) {
        for (int i = 0; i < 10; i++) {
            if (i == 7) {
                for (i = 0; i < 2; i++) {
                    continue;
                }
            }
        }
        result *= n;
        n--;
    }
    scanf("%d", &num4);
    return result;
}

int add_numbers(int num1, int num2) {
    int num3;
    scanf("%d",num3);
    return num1 + num2 + num3;
}

int test() {
    int asd;
    asd = factorial(asd);
    return asd;
}
#include <stdio.h>

int main() {   
    int number;
    
    int some_input;
    
    number = enterNumber();

    printf("You entered: %d", number);

    int doubleRes = calcDouble();
    
    printf("Double it: %d", doubleRes);

    scanf("%d", &some_input);
    printf("You input is: %d", some_input);

    return 0;
}

int enterNumber() {
    int input;
    
    int another_input;

    printf("Enter an integer: ");  
    
    scanf("%d", &input);

    scanf("%d", &another_input);

    return input;
}

int calcDouble() {
    int inputNr = enterNumber();
    
    int doubleNr = inputNr * 2;

    int change = inputNr;

    int double_change = change * 2;

    return doubleNr;
}
#include <stdio.h>

int main() {   
    int number1;
    int number2;
    int number3;
    int number4;

    scanf("%d", &number1);
    printf("You entered: %d", number1);
    scanf("%d%d%f", &number2, &number3, &number4);
    printf("You entered: %d", number2);
    printf("You entered: %d", number3);
    printf("You entered: %f", number4);

    int doubleRes = calcDouble(number1, number2);
    
    printf("Added: %d", doubleRes);
    return 0;
}

int enterNumber() {
    int input;
    int another_nput;

    printf("Enter an integer: ");  
    
    scanf("%d", &input);

    scanf("%d", &another_nput);

    return input;
}

int calcDouble(int num1, int num2) {
    int input;
    int input2;
    scanf("%d", &input);
    input2 = enterNumber();
    int addNr =  num1 + num2;

    return addNr;
}
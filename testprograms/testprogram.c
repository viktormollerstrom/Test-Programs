#include <stdio.h>

int main() {   
    int number;
    int test;
    number = enterNumber();
    test = getchar();
    printf("You entered: %d", number);

    int doubleRes = calcDouble();
    
    printf("Double it: %d", doubleRes);

    return 0;
}

int enterNumber() {
    char ch;
    printf("\nEnter any character : ");
    ch = getch();
    printf("\nYou have entered : %c\n",ch);  

    return ch;
}

int calcDouble() {
    int inputNr = enterNumber();
    
    int doubleNr = inputNr * 2;

    return doubleNr;
}
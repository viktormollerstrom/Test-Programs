#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateCard() {
    return rand() % 13 + 1;
}

char getChoice() {
    char choice;
    printf("Is the next card going to be higher or lower? (h/l): ");
    scanf(" %c", &choice);
    return choice;
}

int getGuess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

void playRound() {
    int card = generateCard();
    printf("The card is: %d\n", card);
    char choice = getChoice();
    int guess = getGuess();
    if (choice == 'h') {
        if (guess > card) {
            printf("Correct! The next card was higher.\n");
        } else {
            printf("Sorry, the next card was lower.\n");
        }
    } else if (choice == 'l') {
        if (guess < card) {
            printf("Correct! The next card was lower.\n");
        } else {
            printf("Sorry, the next card was higher.\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
}

char playAgain() {
    char choice;
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &choice);
    return choice;
}

int main() {
    srand(time(NULL));
    printf("Welcome to the Higher/Lower card game!\n");
    do {
        playRound();
    } while (playAgain() == 'y');
    return 0;
}
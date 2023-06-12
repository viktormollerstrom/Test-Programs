#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void printWord(char word[], int numLetters, int guessedLetters[]) {
    for (int i = 0; i < numLetters; i++) {
        if (guessedLetters[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int checkGuess(char word[], int numLetters, int guessedLetters[], char guess) {
    int correct = 0;
    for (int i = 0; i < numLetters; i++) {
        if (word[i] == guess) {
            guessedLetters[i] = 1;
            correct = 1;
        }
    }
    return correct;
}

char getGuess() {
    char guess;
    printf("Guess a letter: ");
    scanf(" %c", &guess);
    return guess;
}

void playHangman(char word[]) {
    int numLetters = strlen(word);
    int guessedLetters[numLetters];
    for (int i = 0; i < numLetters; i++) {
        guessedLetters[i] = 0;
    }
    int numGuesses = 0;
    int maxGuesses = 6;
    while (numGuesses < maxGuesses) {
        printf("You have %d guesses left.\n", maxGuesses - numGuesses);
        printWord(word, numLetters, guessedLetters);
        char guess = getGuess();
        if (checkGuess(word, numLetters, guessedLetters, guess)) {
            printf("Correct!\n");
            if (memcmp(word, guessedLetters, numLetters) == 0) {
                printf("You win!\n");
                return;
            }
        } else {
            printf("Incorrect.\n");
            numGuesses++;
        }
    }
    printf("You lose. The word was %s.\n", word);
}

int main() {
    srand(time(NULL));
    char words[][10] = {"apple", "banana", "cherry", "orange", "pear"};
    int numWords = sizeof(words) / sizeof(words[0]);
    int randomIndex = rand() % numWords;
    char word[10];
    strcpy(word, words[randomIndex]);
    playHangman(word);
    return 0;
}
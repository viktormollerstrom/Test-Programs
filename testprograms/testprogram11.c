#include <stdio.h>
#include <conio.h>

int number() {
  int num;
  scanf("%d", &num);
  return num;
}

char character() {
  char ch;
  ch = getch();
  return ch;
}

char* string() {
  char str[100];
  gets(str);
  return str;
}

int main() {
   int num;
   char ch;
   char str;

   printf("Enter an integer: ");
   num = number();
   printf("number is: %d", num);

   printf("Enter a character: ");
   ch = character();
   printf("%c", ch);

   printf("Enter a string: ");
   str = string();
   printf("%s\n", str);

   return 0;
}
#include <stdio.h>

int main() {
  int number = 5;
  int factorial;
  int in;
  int put;
  adder();
  factorial = fact(number);
  asd();
  bgr();
  in = get_sc();
  put = get_sc();
  hlm();
  function6();
  another_function();
  tgr();
  erg();
  int test = in + put;
  printf("Result: %d", test);
  return 0;
}

void adder() {
  int num1 = 1;
  int num2 = 2;
  int num3 = num1 + num2;
  printf("This is adder\nResult from calculation: %d", num3); 
}

int fact(int n) {
    printf("This is fact\n");
    int result = 1;
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
    return result;
}

void asd() {
    printf("This is asd\n");
}

void bgr() {
    printf("This is bgr\n");
}

void hlm() {
    printf("This is hlm\n");
}

void function6() {
    printf("This is function6\n");
}

void another_function() {
    printf("This is another_function\n");
}

void tgr() {
    printf("This is tgr\n");
}

void erg() {
    printf("This is erg\n");
}

int get_sc() {
    int input_data;
    printf("Enter a number: ");
    scanf("%d", &input_data);
    printf("You entered: %d", input_data);
    return input_data;
}
#include <stdio.h>

int main(void) {
  printf("Enter Four intergers and i will tell you the Sum\n:");

  int number1 = 0;
  int number2 = 0;
  int number3 = 0;
  int number4 = 0;
  int sum = 0;
  scanf("%d %d %d %d", &number1, &number2, &number3, &number4);
  sum = number1 + number2 + number3 + number4;
  printf("Sum: %d", sum);
}
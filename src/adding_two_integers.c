#include <stdio.h>

int main(void) {
  int integer1 = 0; // will hold the first number
  int integer2 = 0; // will hol the second number

  printf("Enter the first integer: "); // this is a prompt
  scanf("%d", &integer1);              // user inputs the integer

  printf("Enter second integer: "); // second prompt
  scanf("%d", &integer2);

  int sum = 0; // variablet sum bliver lavet
  sum = integer1 + integer2;

  printf("Sum is %d\n", sum); // outputs the sum
}
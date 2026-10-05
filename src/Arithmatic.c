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

  int dif = 0; // Difference mellem tallene
  dif = integer1 - integer2;

  int qou = 0; // Qoutient, divided by
  qou = integer1 / integer2;

  int rem = 0;   // remainder
  if (qou > 0) { // If the first integer is smaller than the second it doesnt
                 // calculate the remainder
    rem = integer1 - qou * integer2;
  } else

    printf("Sum is %d\n", sum);      // outputs the sum
  printf("Difference is %d\n", dif); // outputs the difference
  printf("Qoutient is %d\n", qou);   // outputs the Qoutient
  printf("Remainder is %d\n", rem);  // outputs the Remainder
}
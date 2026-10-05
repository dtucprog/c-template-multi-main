#include <stdio.h>

int main(void) {
  int integer1 = 0; // will hold the first number
  int integer2 = 0; // will hol the second number
  int integer3 = 0; // will hol the third number

  printf("Enter the first integer: "); // this is a prompt
  scanf("%d", &integer1);              // user inputs the integer

  printf("Enter second integer: "); // second prompt
  scanf("%d", &integer2);

  printf("Enter third integer: "); // second prompt
  scanf("%d", &integer3);

  int sum = 0; // variablet sum bliver lavet
  sum = integer1 + integer2 + integer3;

  int ave = 0; // Average
  ave = sum / 3;

  int pro = 0; // Product
  pro = integer1 * integer2 * integer3;

  int max = 0; // initialize max

  if (integer1 >= integer2) { // Is integer 1 the max?
    if (integer1 >= integer3) {
      max = integer1;
    }
  }

  if (integer2 >= integer3) { // Is integer 2 the max?
    if (integer2 >= integer1) {
      max = integer2;
    }
  }

  if (integer3 >= integer1) { // Is integer 3 the max?
    if (integer3 >= integer2) {
      max = integer3;
    }
  }

  int min = 0;                // initialize min
  if (integer1 <= integer2) { // Is integer 1 the min?
    if (integer1 <= integer3) {
      min = integer1;
    }
  }

  if (integer2 <= integer3) { // Is integer 2 the min?
    if (integer2 <= integer1) {
      min = integer2;
    }
  }

  if (integer3 <= integer1) { // Is integer 3 the min?
    if (integer3 <= integer2) {
      min = integer3;
    }
  }
  printf("Sum is %d\n", sum);     // outputs the sum
  printf("average is %d\n", ave); // outputs the average
  printf("Product is %d\n", pro); // outputs the product
  printf("Minimum is %d\n", min); // outputs the Minimum
  printf("Maximum is %d\n", max); // outputs the Minimum
}
#include <stdio.h>

int main(void) {
  int t = 0; // will hold the elapsed time
  int u = 0; // will hold the initial velocity
  int a = 0; // will hol the acceleration

  printf("Enter the initial velocity: "); // this is a prompt
  scanf("%d", &u);

  printf("Enter the acceleration: "); // second prompt
  scanf("%d", &a);

  printf("Enter the elapsed time: "); // third prompt
  scanf("%d", &t);

  int v = u + a * t;                   // Final velocity
  int s = v * t + a * (t * t) * 1 / 2; // Distance

  printf("The Final velocity is \t%d\n", v); // outputs the velocity
  printf("The Distance reached is %d\n", s); // outputs the Remainder
}
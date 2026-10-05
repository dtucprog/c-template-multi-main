#include <stdio.h>

int main() {
  int score;
  printf("Enter your score: ");
  scanf("%d", &score);

  if (score == 42) {
    puts("NOT 42");
  } else {
    puts("NOT 42.");
  }
}
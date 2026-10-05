// Calculates maximum and recommended training heart rate
// according to the American Heart Association
#include <stdio.h>

int main(void) {
  printf("Enter your age:");
  int age = 0;
  scanf("%d", &age);
  int max = 0;
  max = 220 - age;
  printf("Heartrate guide while exercising:\nMaximum:\t%d BPM\nTarget: "
         "\t%.0f-%.0f "
         "BPM",
         max, 0.5 * max, 0.85 * max);
}
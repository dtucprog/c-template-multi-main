#include <stdio.h>
int main() {
  double hours = 0.0;
  double salary;
  double hourlyRate;
  while (hours != -1) {
    printf("Enter Your number of hours worked(enter -1 to end): ");
    scanf("%lf", &hours);
    if (hours != -1) {
      printf("Enter your hourly rate:");
      scanf("%lf", &hourlyRate);
      if (hours > 37) {
        salary = 37 * hourlyRate + (hours - 37) * 1.5 * hourlyRate;
      }
      if (hours <= 37) {
        salary = hours * hourlyRate;
      }
      printf("Monthly salary: %.2f\n\n", salary);
    }
  }
}

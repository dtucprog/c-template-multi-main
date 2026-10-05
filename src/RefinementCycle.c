#include <stdio.h>
int main() {
  double revenue = 0.0;
  double earning;
  while (revenue != -1) {
    printf("Enter weekly revenue(enter -1 to end)");
    scanf("%lf", &revenue);
    if (revenue != -1) {
      earning = 200 + revenue * 0.05;
      printf("Homeowners earnings: %.2f\n\n", earning);
    }
  }
}
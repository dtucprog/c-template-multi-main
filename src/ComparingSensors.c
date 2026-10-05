#include <stdio.h>

int main(void) {
  int record = 0; // will hold the record
  int today = 0;  // will hold the voltage today

  printf("Enter the Voltage record: "); // this is a prompt
  scanf("%d", &record);

  printf("Enter the Voltage today: "); // second prompt
  scanf("%d", &today);

  if (today > record) {
    printf("Congratulations todays voltage %d is higher than the record %d!\n",
           today, record);
    record = today;
  } else {
    printf("The record is still standing\n");
  }
}
#include <stdio.h>

int main(void)
{
  int count = 0;
  int sum = 0;
  int days = 0;
  printf("Please enter days for deposit: ");
  scanf("%d", &days);
  while (count++ < days)
  {
    sum = sum + (count * count);
    printf("Count: %d\tSum: %d\n", count * count, sum);
  }

  return 0;
}

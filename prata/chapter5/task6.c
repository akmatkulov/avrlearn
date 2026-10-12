#include <stdio.h>

int main(void)
{
  int sum = 0;
  int count = 0;
  int days = 0;
  printf("Please enter days for deposite: ");
  scanf("%d", &days);

  while (count++ < days)
  {
    sum = sum + count;
    printf("Count: %d\tSum: %d\n", count, sum);
  }
  return 0;
}


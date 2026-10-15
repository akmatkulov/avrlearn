#include <stdio.h>

int main(void)
{
  int num;
  int sum = 0;

  printf("Enter number or 'q' to the exit: ");

  while (scanf("%d", &num) == 1) {
    sum = num + sum;
    printf("Next number: ");
  }
  printf("Total:  %d\n", sum);
  return 0;
}

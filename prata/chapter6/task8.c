#include <stdio.h>

int main(void)
{
  float num1, num2;
  printf("Enter num1 and num2: ");
  while(scanf("%f %f", &num1, &num2) == 2)
  {
    printf("Result: %f\n", ((num1 - num2) / (num1 * num2)));
    printf("Try again: ");
  }

  return 0;

}

#include <stdio.h>

int main(void)
{
  double num;

  printf("Enter number: ");
  if (scanf("%lf", &num) != 1){
    return 1;
  }
  printf("Decimal: %f, Exp: %e\n", num, num);

  return 0;
}

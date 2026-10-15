#include <stdio.h>
double power(double n, int p);

int main(void)
{
  double num;
  int pow;

  printf("Enter number and power: ");

  while (scanf("%lf %d", &num, &pow) == 2)
  {
    double xpor = power(num, pow);
    printf("%.3g --- %.5g\n", num, xpor);
  }

  return 0;
}

double power(double n, int p)
{
  int i;
  double sum = 1;
  for (i = 1; i <= p; i++)
  {
    sum *= n;
  }
  return sum;
}

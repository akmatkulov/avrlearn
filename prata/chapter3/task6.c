#include <stdio.h>

int main(void)
{
  double num = 3.0e-23f;
  double kvart;

  printf("Entrer water kvart: ");
  scanf("%lf", &kvart);

  printf("Moleculs in water: %g\n", kvart * num * 950.0);

  return 0;
}

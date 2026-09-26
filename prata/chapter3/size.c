#include <stdio.h>

int main(void)
{
  printf("Size int: %zd byte.\n", sizeof(int));
  printf("Size char: %zd byte.\n", sizeof(char));
  printf("Size short: %zd byte.\n", sizeof(short));
  printf("Size long: %zd byte.\n", sizeof(long));

  printf("Size float: %zd byte.\n", sizeof(float));
  printf("Size double: %zd byte.\n", sizeof(double));

  return 0;
}

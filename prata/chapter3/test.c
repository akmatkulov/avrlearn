#include <stdio.h>

int main(void)
{
  int x = 100;

  printf("Decimal: %d, Octal: %o, Hex: %x\n", x, x, x);
  printf("Decimal: %d, Octal: %#o, Hex: %#x\n", x, x, x);
  printf("Signal\a\n");
  printf("\a\n");

  return 0;
}

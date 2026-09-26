#include <stdio.h>

int main(void)
{
  float value;
  printf("Enter value: ");
  scanf("%f", &value);

  printf("Fixed: %.6f\n", value);
  printf("Exp form: %e\n", value);
  printf("Exp bit: %a\n", value);

  return 0;
}

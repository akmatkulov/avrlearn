#include <stdio.h>

int main(void)
{
  float unc = 31.10; 
  int cup;

  printf("Enter cup: ");
  scanf("%d", &cup);

  printf("Pints: %d\n", cup / 2);
  printf("Ounce: %.2f\n", cup * 8 * unc);
  printf("Tablespoon: %d\n", cup * 8 * 2);
  printf("Teaspoon: %d\n", cup * 8 * 2 * 3);
  return 0;

  

}

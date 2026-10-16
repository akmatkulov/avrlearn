#include <stdio.h>

int main(void)
{

  int min, max;
  int sqrt, cube;

  printf("Enter min max: ");
  scanf("%d %d", &min, &max);

  printf("n\t | n²\t   | n³\t\n");
  printf("--------------------------\n");
  for (min; min <= max; min++)
  {
    sqrt = min * min;
    cube = min * min * min;
    printf("%d\t | %d\t   | %d\t\n", min, sqrt, cube);
  }
  printf("\n");
  return 0;
}

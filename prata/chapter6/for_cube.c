#include <stdio.h>

int main(void)
{
  printf("N  N in Cube.\n");
  for (int n = 1; n <= 6; n++)
    printf("%d %10d\n", n, n*n*n);
  
  return 0;
}

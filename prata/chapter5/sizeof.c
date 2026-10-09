#include <stdio.h>

int main(void)
{
  int n = 0;
  size_t intsize;
  intsize = sizeof(int);
  printf("n = %d, n include of %zd bytes, all int include %zd bytes.\n",
         n, sizeof(n), intsize);
  return 0;
}

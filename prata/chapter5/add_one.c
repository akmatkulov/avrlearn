#include <stdio.h>

int main(void)
{
  int super = 1, ultra = 1;
  int post_b, pre_b;

  post_b = super++;
  pre_b = ++ultra;

  printf("POST: %d, PRE: %d\n", post_b, pre_b);
  post_b = super++;
  printf("Post Again: %d\n", post_b);
  return 0;
}

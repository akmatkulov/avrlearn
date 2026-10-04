#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
  const double SCALE = 0.333;
  double shoe, foot;
  printf("Size shoes(man)\t| Size foot\t\n");
  shoe = 3.0;
  printf("------------------------------\n");
  
  while (shoe < 18.5)
  {
    foot = SCALE * shoe + ADJUST;
    printf("%5.1f           | %5.2f inches.\t\n", shoe, foot);
    shoe += 1.0;
  }
  printf("------------------------------\n");
  printf("Full sizes print\n");
  return 0;
}

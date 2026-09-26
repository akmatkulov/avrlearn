#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
  jolly();
  jolly();
  jolly();
  deny();

  return 0;
}

void jolly(void)
{
  printf("Good job Micky\n");
}

void deny(void)
{
  printf("Nothing can not say it\n");
}

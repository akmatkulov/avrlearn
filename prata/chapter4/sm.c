#include <stdio.h>

int main(void)
{
  float sm;
  char name[20];
  printf("Enter your name and height:  ");
  if (scanf("%s %f", name, &sm) != 2){
    return  1;
  }
  printf("%s your height in meters: %.2f m.\n", name, sm/100);

  return 0;
}

#include <stdio.h>

int main(void)
{
  char name[20];
  char surename[20];

  printf("Enter name and surename: ");
  if (scanf("%s %s", name, surename) != 2)
  {
    return 1;
  }

  printf("%s, %s\n", surename, name);

  return 0;
}

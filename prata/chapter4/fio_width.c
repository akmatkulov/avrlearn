#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];
  printf("Enter your name: ");
  if (scanf("%19s", name) != 1)
  {
    return 1;
  }

  printf("\"%s\"\n", name); // 1
  printf("\"%20s\"\n", name); //2
  printf("\"%-20s\"\n", name); //3
  printf("\"%*s\"\n", (int)strlen(name) + 3, name); //3
  return 0;
}

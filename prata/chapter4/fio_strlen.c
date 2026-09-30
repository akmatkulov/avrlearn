#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];
  char surename[20];

  printf("Enter name and surename: ");
  if (scanf("%s %s", name, surename) != 2) {
    return 1;
  }

  printf("%s %s\n", name, surename);
  printf("%-*d %-*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(surename), (int)strlen(surename)); 
  printf("%s %s\n", name, surename);
  printf("%*d %*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(surename), (int)strlen(surename)); 
  return 0;
}

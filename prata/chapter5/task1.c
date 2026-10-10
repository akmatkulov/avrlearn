#include <stdio.h>
#define PER_MIN 60

int main(void)
{
  int min;
  printf("Enter minutes: ");
  scanf("%d", &min);

  while (min > 0) {
    printf("Hours: %d, Minutes: %d\n", min / PER_MIN, min % PER_MIN);
    printf("Enter minutes: ");
    scanf("%d", &min);
  }

  return 0;
}

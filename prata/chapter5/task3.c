#include <stdio.h>
#define PER_DAY_WEEK 7
int main(void)
{
  int days;
  printf("Enter days: ");
  scanf("%d", &days);

  while (days > 0) {
    printf("Weeks: %d, Days: %d\n", days / PER_DAY_WEEK, days % PER_DAY_WEEK);
    printf("Enter days: ");
    scanf("%d", &days);
  }
return 0;

}

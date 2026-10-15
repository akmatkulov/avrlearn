#include <stdio.h>

int main(void)
{
  int limit, t_ct;
  double time, power_of_2;
  printf("Enter elements: ");
  scanf("%d", &limit);

  for (time = 0, power_of_2 = 1, t_ct = 1;
       t_ct <= limit; t_ct++, power_of_2 *= 2.0)
  {
    time += 1.0 / power_of_2;
    printf("Time: %f, elements = %d\n", time, t_ct);
  }

  return 0;
}

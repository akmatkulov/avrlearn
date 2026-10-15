#include <math.h>
#include <stdio.h>


int main(void)
{
  const double ANSWER = 3.14159;
  double response;
  printf("Enter Pi: ");
  scanf("%lf", &response);

  while (fabs(response - ANSWER) > 0.0001)
  {
    printf("Enter PI again: ");
    scanf("%lf", &response);
  }

  printf("PI close enough!\n");

  return 0;

}

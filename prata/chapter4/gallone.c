#include <stdio.h>
#define GAL 3.785

int main(void)
{
  const float mil = 1.609;
  float way_mil, way_gal;
  printf("Enter way mil and way gal: ");
  scanf("%f %f", &way_mil, &way_gal);
  printf("MPG: %.0f\n", way_mil / way_gal);
  printf("L/100 km: %.1f\n", ((way_gal * GAL) / (way_mil * mil) * 100));


  return 0;
}

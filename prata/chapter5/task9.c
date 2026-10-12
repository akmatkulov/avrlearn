#include <stdio.h>
void gradus(double x);

int main(void)
{
  double farenheit;
  printf("Please enter farenheit: ");
  while (scanf("%lf", &farenheit) == 1 && farenheit > 0) {
    gradus(farenheit);
    printf("Please enter farenheit: ");
  }
  return 0;
}

void gradus(double x)
{
  const double celsii_pre = 32.0;
  const double kelvin_pre = 273.16;
  const double celsii_x = 5.0 / 9.0;
  printf("Farenheit: %.2lf °F\tCelsii: %.2lf °C\tKelvin: %.2lf K\t\n",
         x, celsii_x * (x - celsii_pre), ((celsii_x * (x - celsii_pre)) + kelvin_pre));

}

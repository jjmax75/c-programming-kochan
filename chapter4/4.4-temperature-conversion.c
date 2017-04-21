// convert 27 degrees from fahrenheit to celsius

#include "stdio.h"

int main (void)
{
  int tempFahrenheit = 27;

  float tempCelsius = (tempFahrenheit - 32) / 1.8;

  printf ("%i fahrenheit in celsius is %f\n", tempFahrenheit, tempCelsius);

  return 0;
}

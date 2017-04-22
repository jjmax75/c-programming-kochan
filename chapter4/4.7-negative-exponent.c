#include <stdio.h>

int main (void)
{
  float bracket1 = 3.31e-8 * 2.01e-7;

  float bracket2 = 7.16e-6 + 2.01e-8;

  printf ("%g divided by %g equals %g\n", bracket1, bracket2, bracket1 / bracket2);

  return 0;
}

// evaluate a simple polynomial using basic operators

#include <stdio.h>

int main (void)
{
  float x = 2.55;

  printf ("The evaluation of 3 times %f to the power of three minus 5 times %f", x, x);
  printf (" to the power of 2 plus 6 is %f\n", 3 * (x * x * x) - 5 * (x * x) + 6);

  return 0;
}

// round an integer rather than truncate it

#include <stdio.h>

int main (void)
{
  int i1 = 365, j1 = 7;
  int i2 = 12258, j2 = 23;
  int i3 = 996, j3 = 4;

  printf ("The next multiple of %i after %i is %i\n", j1, i1, i1 + j1 - i1 % j1);
  printf ("The next multiple of %i after %i is %i\n", j2, i2, i2 + j2 - i2 % j2);
  printf ("The next multiple of %i after %i is %i\n", j3, i3, i3 + j3 - i3 % j3);

  return 0;
}

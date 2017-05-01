#include <stdio.h>

int main (void)
{
  int n;

  printf ("TABLE OF POWERS OF TWO\n");
  printf ("----------------------\n\n");
  printf (" n          n squared\n");
  printf ("----------------------\n");

  for (n = 1; n <= 10; n++){
    printf ("%2i               %i\n", n, n * n);
  }

  return 0;
}

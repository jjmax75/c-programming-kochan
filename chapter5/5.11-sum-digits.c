// sum digits of integer

#include <stdio.h>

int main (void)
{
  int sum, n;

  printf ("What integer would you like me to sum the digits of? ");
  scanf ("%i", &n);

  while ( n > 0 ) {
    sum += n % 10;
    n /= 10;
  }

  printf ("The sum of the digits is %i\n", sum);

  return 0;
}

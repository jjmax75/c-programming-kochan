// print table of prime numbers up to 50

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  int p, d;
  bool isPrime;

  printf( "2 " );

  for ( p = 3; p <= 50; p += 2 ) {
    isPrime = 1;

    for ( d = 2; d < p && isPrime; d++ ) {
      if ( p % d == 0) {
        isPrime = 0;
      }
    }

    if ( isPrime ) {
      printf( "%i ", p );
    }
  }
  printf( "\n" );

  return 0;
}

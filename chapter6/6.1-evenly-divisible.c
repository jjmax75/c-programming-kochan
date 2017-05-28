// ask for two ints, tell user if first int is evenly divisible by second

#include <stdio.h>

int main (void) {
  int num1, num2;

  printf( "Enter two integers, separated by a space: " );
  scanf( "%i %i", &num1, &num2 );

  if ( num1 % num2 ) {
    printf( "%i is not evenly divisible by %i\n", num1, num2 );
  } else {
    printf( "%i is evenly divisible by %i\n", num1, num2 );
  }

  return 0;
}

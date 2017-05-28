// ask for two ints, give result of first number divided by second with 3 places
// of accuracy

#include <stdio.h>

int main (void) {
  int num1, num2;

  while( num2 == 0){
    printf( "Enter two integers, separated by a space: " );
    scanf( "%i %i", &num1, &num2 );

    if ( num2 == 0 ) {
      printf( "Cannot divide by zero, please try again\n" );
    }
  }

  printf( "%i divided by %i is %0.3f\n", num1, num2, num1 / (float)num2 );

  return 0;
}

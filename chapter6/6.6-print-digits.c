// print digits of integer as word

#include <stdio.h>

int main (void) {
  int number, digit, copyNumber;
  int place = 1;

  // get number
  printf( "Enter an integer: " );
  scanf( "%i", &number );

  copyNumber = number;

  // get highest place value of number
  while( copyNumber >= 9 ) {
    place *= 10;
    copyNumber /= 10;
  }

  // get digit
  do {
    digit = number / place;
    number %= place;
    place /= 10;

    switch ( digit ) {
      case 1:
        printf( "one " );
        break;
      case 2:
        printf( "two " );
        break;
      case 3:
        printf( "three " );
        break;
      case 4:
        printf( "four " );
        break;
      case 5:
        printf( "five " );
        break;
      case 6:
        printf( "six " );
        break;
      case 7:
        printf( "seven " );
        break;
      case 8:
        printf( "eight " );
        break;
      case 9:
        printf( "nine " );
        break;
      case 0:
        printf( "zero " );
        break;
    }
  } while ( place > 0 );

  printf( "\n" );

  return 0;
}

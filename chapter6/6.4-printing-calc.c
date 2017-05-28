// printing calculator

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{
  float accumulator;
  bool running;
  float operand;
  char operator;

  printf( "Begin Calculations\n" );

  do {
    running = true;

    scanf( "%f %c", &operand, &operator );

    if ( !accumulator && operator != 'S' ) {
      printf( "You need to set the accumulator first, use the 'S' operator\n" );
    } else if ( accumulator && operator == 'S' ) {
      printf( "You have already set the accumulator, 'S' operator is illegal here\n" );
    } else if ( operator == 'E' && operand != 0 ) {
      printf( "You need to provide '0' as the operand if you wish to exit\n" );
    } else {
      switch ( operator ) {
        case 'S':
          accumulator += operand;
          printf( "= %f\n", accumulator );
          break;
        case '+':
          accumulator += operand;
          printf( "= %f\n", accumulator );
          break;
        case '-':
          accumulator -= operand;
          printf( "= %f\n", accumulator );
          break;
        case '*':
          accumulator *= operand;
          printf( "= %f\n", accumulator );
          break;
        case '/':
          accumulator /= operand;
          printf( "= %f\n", accumulator );
          break;
        case 'E':
          printf( "= %f\n", accumulator );
          running = false;
          break;
        default:
          printf( "%c is not recognised as a valid operator, please try again\n", operator );
          break;
      }
    }
  } while ( running );

    return 0;
}

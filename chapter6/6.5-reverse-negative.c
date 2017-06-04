// reverse digits of a negative integer

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  int number, last_number;
  bool negative_number;

  printf ("What integer would you like reversed?\n");
  scanf ("%i", &number);

  negative_number = number < 0;
  number = negative_number ? -number : number;

  while (number != 0) {
    last_number = number % 10;
    printf ("%i", last_number);
    number = number / 10;
  }

  negative_number ? printf("-\n") : printf("\n");

  return 0;
}

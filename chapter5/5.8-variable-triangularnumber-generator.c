#include <stdio.h>

int main (void)
{
  int n, number, triangularNumber, counter, counter_limit;

  printf ("How many triangular numbers would you like to find? ");
  scanf ("%i", &counter_limit);

  for (counter = 1; counter <= counter_limit; counter++) {
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triangularNumber = 0;

    for (n = 1; n <= number; n++) {
      triangularNumber += n;
    }

    printf ("The triangular number of %i is %i\n\n", number, triangularNumber);

  }
  return 0;
}

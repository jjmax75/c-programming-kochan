// print table of first 10 factorials using while loop

#include <stdio.h>

int main (void)
{
  int n, o, factorial_n;

  printf (" n       n!\n");
  printf ("-------------\n");

  n = 1;
  while ( n <= 10 ){
    factorial_n = 0;

    o = 1;
    while ( o <= n ){
      factorial_n += o;
      o++;
    }

    printf ("%2i      %i\n", n, factorial_n);

    n++;
  }

  return 0;
}

// print table of first 10 factorials

#include <stdio.h>

int main (void)
{
  int n, o, factorial_n;

  printf (" n       n!\n");
  printf ("-------------\n");

  for (n = 1; n <= 10; n++){
    factorial_n = 0;

    for (o = 1; o <= n; o++){
      factorial_n += o;
    }

    printf ("%2i      %i\n", n, factorial_n);
  }

  return 0;
}

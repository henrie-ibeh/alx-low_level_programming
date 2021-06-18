#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
int n;
int srand(time(0));
int n = rand() - RAND_MAX / 2;
{
if (n > 0)
{
  printf("%zu is positive\n", n);
}
if (n < 0)
{
printf(n, "%zu is negative\n");
}
else
{
printf(n, "%zu is zero\n");
}
return (0);
}

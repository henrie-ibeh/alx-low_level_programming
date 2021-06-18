#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - prints string
 *Description: prints a string
 *Return: 0
 */
int main(void)
{
int n, z;
srand(time(0));
n = rand() - RAND_MAX / 2;
z = n % 10;
/* your code goes there */
if (z > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, z);
}
else if (z == 0)
{
printf("Last digit of %d is %d and is 0\n", n, z);
}
else if ((z < 6) && (z != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
}
return (0);
}

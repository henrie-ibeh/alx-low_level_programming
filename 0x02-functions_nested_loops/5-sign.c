#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
/* more headers goes there */
int print_sign(int n)
{
if (n > 0)
{
printf('+');
return (1);
}
else if (n == 0)
{
printf('0');
return (0);
}
else
printf('-');
return (-1);
}

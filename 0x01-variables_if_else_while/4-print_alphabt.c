#include <string.h>
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
char z[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int len = strlen(z);
for (i = 0; i < len; i++)
{
if (z[i] == 'e')
{
continue;
}
else if (z[i] == 'q')
{
continue;
}
else
{
putchar(z[i]);
}
}
putchar('\n');
return (0);
}

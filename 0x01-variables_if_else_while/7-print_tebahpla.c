#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
int i;
char z[] = "zyxwvutsrqponmlkjihgfedcba";
int len = strlen(z);
for (i = 0; i < len; i++)
{
putchar(z[i]);
}
putchar('\n');
return (0);
}

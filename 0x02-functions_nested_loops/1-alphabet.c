#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include "holberton.h"
/* more headers goes there */
/* betty style doc for function main goes there */
int print_alphabet();
int main(void)
{
print_alphabet();
return (0);
}
int print_alphabet(void)
{
int i, len;
char z[] = "abcdefghijklmnopqrstuvwxyz";
len = strlen(z);
for (i =0; i < len; i++)
{
putchar(z[i]);
}
putchar('\n');
return (0);
}
int main(void)
{
print_alphabet();
return (0);
}

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
int i = 0;
int a = 1;
do {
printf("%d", i);
i++;
}
while ( i < 10 );
printf("\n");
return (0);
}

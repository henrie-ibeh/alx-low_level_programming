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
int i = 0;
do {
printf("%d", i);
i++;
} while (i < 10);
printf("\n");
return (0);
}

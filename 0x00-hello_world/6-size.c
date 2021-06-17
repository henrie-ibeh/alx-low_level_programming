#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 *main - prints datatype sizes
 *Description: prints a string
 *Return: 0
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
double int_Max;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
 printf("Size of a long int: %zu byte(s)\n", sizeof(int_Max));
printf("Size of a long long int: %zu byte(s)\n", sizeof(int_Max));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 *main - prints datatype sizes
 *Description: prints a string
 *Return: 0
 */
int main(int argc, char** argv)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of a char: %zu byte(s)", sizeof(charType));
printf("Size of a int: %zu byte(s)", sizeof(intType));
printf("Size of a long int: %zu byte(s)", int_Max);
printf("Size of a long long int: %zu byte(s)", int_Max);
printf("Size of a float: %zu byte(s)", sizeof(floatType));
return (0);
}

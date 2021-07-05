#include "holberton.h"
#include <string.h>
/**
 * _memset - fills a memory with constant byte
 * @s: function argument
 * @b: second function argument
 * @n: function parameter
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for(i = 0; i < n; i++)
{
  printf("%d%d\n", sizeof(*s), sizeof(b));
}
return (0);
}

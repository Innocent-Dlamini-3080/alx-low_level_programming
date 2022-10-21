#include "main.h"

/**
 * _memset - functions that fills first n bytes of memory
 * pointed to by pointer with b
 * @s: pointer to char
 * @b: function argument
 * @n: function argument
 * Return: memory address of pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

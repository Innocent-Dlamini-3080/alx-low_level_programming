#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area of dest
 *
 * @dest: pointer to char
 * @src: pointer to char
 * @n: function argument
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

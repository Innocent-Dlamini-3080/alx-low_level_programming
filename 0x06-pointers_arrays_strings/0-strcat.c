#include "main.h"
#include <stdio.h>

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	int i, j;

	for (i = 0; *dest != '\0';)
	{
		dest++;
		i++;
	}

	for (j = 0; *src != '\0'; )
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	*dest = '\0';
	return (temp);
}

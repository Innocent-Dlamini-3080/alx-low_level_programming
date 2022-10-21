#include <stdio.h>

/**
 * _strlen - return length
 *@s: char argument
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

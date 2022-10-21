#include "main.h"

/**
 * _strcmp - comoare two strings
 * @s1: string to compare to
 * @s2: string to compare
 *
 * Return: a poniter to resulting string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

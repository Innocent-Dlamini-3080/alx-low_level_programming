#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * substring
 * @s: pointer to char
 * @accept: pointer argument
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i, match;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			match = 0;
			if (*s == accept[i])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (!match)
			break;
		s++;
	}
	return (count);
}

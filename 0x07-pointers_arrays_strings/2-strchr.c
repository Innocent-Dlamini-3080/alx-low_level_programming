#include "main.h"

/**
 * *_strchr - finds character in string
 * @s: pointer to char
 * @c: function argument
 * Return: pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	for (; *s; )
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}

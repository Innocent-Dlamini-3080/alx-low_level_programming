#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*haystack && *str2 && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (!*str2)
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}

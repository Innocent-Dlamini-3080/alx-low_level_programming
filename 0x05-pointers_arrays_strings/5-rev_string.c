#include "main.h"

/**
 * count - returns the length of a string
 * @s: string
 * Return: count
 */

int count(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */


void rev_string(char *s)
{
	int i;
	int j = 0;
	int length = (count(s));

	for (i = length - 1; i >= length / 2; i--)
	{
		char first = s[j];

		s[j] = s[i];
		s[i] = first;
		j++;
	}

}



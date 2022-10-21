#include "main.h"

/**
 * puts2 - prints some numbers
 * @str: string
 */

void puts2(char *str)
{
	int i;
	int j;
	int count = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
	}
	for (i = 0; str[i] != '\0' && i < count;)
	{
		if (i < count)
		{
			_putchar(str[i]);
		}
		i = i + 2;
	}
	_putchar('\n');
}

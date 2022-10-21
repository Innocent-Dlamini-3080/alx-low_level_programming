#include "main.h"

/**
 * puts_half - prints some numbers
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int j;
	int count = 0;

	for (j = 0; str[j] != '\0'; j++)
		count++;
	if (count % 2 != 0)
		count = (count + 1) / 2;
	else
		count = count / 2;
	for (i = count; str[i] != '\0';)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints
 *@str: char argument
 *
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

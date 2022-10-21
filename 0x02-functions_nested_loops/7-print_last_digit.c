
#include "main.h"

/**
 * print_last_digit - checks for reminder
 * @n: character to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	int mod = n % 10;

	if (mod < 0)
	{
		mod = mod * -1;
	}
	_putchar(mod + '0');
	return (mod);
}


#include "main.h"
/**
 * main - print _putchar.
(*
 * Return: 0 on success
 */
int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');

	return (0);
}

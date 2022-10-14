#include <stdlib.h>
#include <stdio.h>
/**
 * main - print a-z except e and q in lower case
(*
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

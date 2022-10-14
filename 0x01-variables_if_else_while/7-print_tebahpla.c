#include <stdlib.h>
#include <stdio.h>
/**
 * main - print numbers from 0 to 9
(*
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

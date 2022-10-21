#include <stdio.h>

/**
 * swap_int - swap two numbers
 *@a: integer argument
 *@b: integer argument
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

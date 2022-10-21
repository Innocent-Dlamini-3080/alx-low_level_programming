#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randomNumber;
	int count;
	int summation;

	srand(time(NULL));
	for (count = 0, summation = 2772; summation > 122; count++)
	{
		randomNumber = (rand() % 125) + 1;
		printf("%c", randomNumber);
		summation -= randomNumber;
	}
	printf("%c", summation);

	return (0);
}

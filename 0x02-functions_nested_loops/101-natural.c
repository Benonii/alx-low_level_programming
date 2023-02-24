#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{

	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

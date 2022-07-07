#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3)
			printf("Fizz");
		else if (i % 5)
			print("Buzz");
		else if (i % 3 && i % 5)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ")
	}
	printf("\n");

	return (0);
}

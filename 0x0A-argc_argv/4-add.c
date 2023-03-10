#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int sum, count;

	if (argc > 1 && argc == int)
	{
		for (count = 1; count < argc - 1; count++)
			sum += atoi(argv[count]);
		printf("%d\n", sum);

		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

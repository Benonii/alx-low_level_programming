#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

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

	if (argc <= 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	for (count = 1; count < argc; count++)
	{
		if (!_isdigit(atoi(argv[count])))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		else
			sum += atoi(argv[count]);
	}
					
	printf("%d\n", sum);

	exit(EXIT_SUCCESS);

}

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
	int mul, n, m;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);

	mul = n * m;
	printf("%d\n", mul);

	exit(EXIT_SUCCESS);
}

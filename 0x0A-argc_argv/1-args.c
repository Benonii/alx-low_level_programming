#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
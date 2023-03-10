#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int count;
	
	for (count = 1; count < argc - 1; count++)
		printf("%s\n", argv[count]);

	exit(EXIT_SUCCESS);
}

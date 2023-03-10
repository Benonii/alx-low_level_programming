#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS OR EXIT_FAILURE
 */

int main (int argc, __attribute__ ((unused)) char *argv[])
{
	int count;
	
	while (argc++)
		count++;
	printf("%d", count);

	exit(EXIT_SUCCESS);
}

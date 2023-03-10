#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS OR EXIT_FAILURE
 */

int main (int argc, __attribute__ ((unused)) char *argv[])
{

	(void) argc;

	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}

#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed to main
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int o1, o2, r, w2;
	const char *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
		exit(97);
	o1 = open(file_from, O_RDONLY);
	o2 = open(file_to, O_CREAT | O_WRONLY);

	if (file_from == NULL || file_to == NULL)
		return (-1);

	return (0);
}

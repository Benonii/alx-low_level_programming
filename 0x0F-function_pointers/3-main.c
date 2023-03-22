#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: an array of pointers to arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("ERROR");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (*operator != '+' && *operator != '-' &&
		*operator != '*' && *operator != '/' && *operator != '%')
	{
		printf("ERROR");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("ERROR");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}

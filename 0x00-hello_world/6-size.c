#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	
	printf("Size of char: %lu byte(s)\n" sizeof(charType));
	printf("Size of int: %lu byte(s)\n" sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n" sizeof(longIntType));
	printf("Size of a long long int: %lu byte(s)\n" sizeof(longLongIntType));
	printf("Size of a float: %lu byte(s)\n" sizeof(floatType));
		return (0);
}

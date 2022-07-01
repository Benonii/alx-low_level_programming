#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", lastDigit);
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", lastDigit);
		printf("and is 0\n");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", lastDigit);
		printf("and is less than 6 and not 0\n");
	}
	else
		printf("Please try again!");
	return (0);
}

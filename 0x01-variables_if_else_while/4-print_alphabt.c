#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}

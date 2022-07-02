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
		if (ch == 101 || ch == 113)
		{
			ch++;
			putchar(ch);
			continue;
		}
		putchar(ch);
	}
	putchar(10);
	return (0);
}

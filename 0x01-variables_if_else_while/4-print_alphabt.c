#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
	if (ch == 101)
	{
		ch++;
		continue;
	}
	else if (ch == 113)
	{
		ch++;
		continue;
	}
	else
	{
		putchar(ch);
		ch++;
	}
}
	putchar(10);
	return (0);

}

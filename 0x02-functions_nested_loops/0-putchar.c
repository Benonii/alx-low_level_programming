#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int put_char()
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar(10);
	return (0);
}

int main(void)
{
	return put_char();
}

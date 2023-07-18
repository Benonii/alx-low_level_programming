#include "main.h"
#include "printf.h"

/**
 * env - prints the current enviroments
 *
 * Return: None
 */

void env(void)
{
	int i = 0;

	for (i = 0; environ[i]; i++)
		_printf("%s\n", environ[i]);
}

#include "main.h"
#include "printf.h"

/**
 * check_for_bin - checks if the command starts with bin
 * @cmd: string "/bin/"
 * @av: the command
 *
 * Return: 5 if it's a match, anything else if not
 */

int check_for_bin(char cmd[1024], char *av2)
{
	int a = 0, j;

	for (j = 0; j < 5; j++)
	{
		if (cmd[j] == av2[j])
			a++;
	}

	return (a);
}

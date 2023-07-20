#include "main.h"
#include "printf.h"

/**
 * check_for_bin - checks if the command starts with bin
 * @cmd: string "/bin/"
 * @av: the command
 *
 * Return: 5 if it's a match, anything else if not
 */

int check_for_bin(char *av2[100])
{
	char cmd[6] = "/bin/";
	int a = 0, j = 0;

	cmd[6] = '\0';

	for (; j < 5; j++)
	{
		if (cmd[j] == av2[0][j])
			a++;
	}

	return (a);
}

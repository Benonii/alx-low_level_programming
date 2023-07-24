#include "main.h"

char *_getenv(char *var)
{
	char *path = NULL;
	char *buf = malloc(5);
	int i, j, k = 0;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; j < 4; j++)
			buf[j] = environ[i][j];

		buf[4] = '\0';

		if (_strcmp(var, buf) == 0)
		{
			path = malloc(sizeof(environ[i] - 4));
			path = environ[i] + 5;
		}
	}

	while (path[k])
		k++;

	path[k] = '\0';

	free(buf);
	return (path);
}

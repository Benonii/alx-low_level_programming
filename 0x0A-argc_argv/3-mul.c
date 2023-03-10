#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul, n, m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);

		mul = n * m;
		printf("%d\n", mul);

		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("ERROR");
		exit(EXIT_FAILURE);
	}
}

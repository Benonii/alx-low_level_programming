#include <stdio.h>

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
	        putchar('\n');                                                                                                                          
		        ch++;
	}
}

	return 0;

}

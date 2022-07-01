#include <stdio.h>                                                                                                                              
                                                                                                                                                
int main(void)                                                                                                                                  
{                                                                                                                                               
int ch = 'a';                                                                                                                                   
                                                                                                                                                
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
int capCh = 'A';

while (capCh <= 'z')
{
	putchar(capCh);
	capCh++;
}
	putchar("\n");
                                                                                                                                                
        return 0;                                                                                                                               
}                    

#include <stdio.h>                                                                                                                              
                                                                                                                                                
int main(void)                                                                                                                                  
{                                                                                                                                               
char ch = 'a';                                                                                                                                   
                                                                                                                                                
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
char capCh;
capCh = 'A';

while (capCh <= 'Z')
{
	putchar(capCh);
	capCh++;
}
	putchar(10);
                                                                                                                                                
        return 0;                                                                                                                               
}                    

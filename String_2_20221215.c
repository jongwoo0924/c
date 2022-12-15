#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch,ch2; 
	
	scanf("%c",&ch);
	int n = ch;
	if(n<91)
	{
	ch2 = n+32;
	}
	if(n>96)
	{
	ch2 = n-32;
	}
	printf("%c", ch2);
	return 0;
} 

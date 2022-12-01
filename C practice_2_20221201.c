#include <stdio.h>


int main(void)
{
	int n,b;
	scanf("%d",&n);
	while(n > 0)
	{
	int a;
	a = n%10;
	if(a%3==0)
		{
			b++;
		}
	n/=10;
	}
	printf("%d",b);
	return 0;
}

//

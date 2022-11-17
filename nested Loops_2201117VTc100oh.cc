#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,a,j;
	
	scanf("%d",&a);
	
	for(j=1;j<=a;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d ",i);
		
		}
		printf("\n");
	}

	return 0;
}

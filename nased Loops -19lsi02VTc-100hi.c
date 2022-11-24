#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*int main(int argc, char *argv[]) 
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}*/




int main(int argc, char *argv[]) 
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)-1;k++)
		{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}

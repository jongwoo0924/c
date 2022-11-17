#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,a,j;
	
	scanf("%d",&a);
	
	/*
	if a=5
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
	*/
	for(j=1;j<=a;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d ",i);
		
		}
		printf("\n");
	}

	
	/*
	5 4 3 2 1
	4 3 2 1
	3 2 1
	2 1
	1
	*/
	for(j=a;j>=1;j--)
	{
		for(i=j;i>=1;i--)
		{
			printf("%d ",i)	;
		}
		printf("\n");
	}
		for(i=1;i<=20000;i++)
	{
		printf("%2d : ",i);
	
	/*100이하 자연수 약수 출력
	ex) 4 : 1 2 4
	    5 : 1 5*/		
			for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
}





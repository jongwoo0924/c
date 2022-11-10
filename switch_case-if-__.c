#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int n;
scanf("%d",&n);

switch(n%2)
{
	case 0:
		if(n<=10)
		{
		printf("짝수");
		break;
		}
	case 1:
		
		if(n<=10)
		{
		printf("홀수");
		break;
		}
		default:
		printf("%d\n",n);
		break;
	}
}

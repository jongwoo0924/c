#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int num[ ] = {5,2,6,7,8,9,4,3,1,23,4,1,14,114,1,224};
	
	for(i=0;i< sizeof(num) / sizeof(num[0]);i++)
	{
		printf("%d , ",num[i]);
	}

	return 0;
}

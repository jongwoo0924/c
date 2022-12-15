#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sentence[80];
	
	puts("문장을 입력하세요 : ");
	gets(sentence);
	puts(sentence);
	printf("%s", sentence);
	
	return 0;
}  //printf= puts
   //scanf= gets

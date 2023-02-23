#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //strcmp = string CoMPare(문자열 비교 함수)
//                            strcmp(a,b) = a-b
//                   strlen = string LENgth
//                            strlen(문자열) = \0 제외 문자열 길이
//                   strcat = string conCATenation
//                            strcat(a,b) = a와b를 이어 붙임

int main(void)
{
  char start[15] = "C3";
  char end[15] = "coding";
  int len;

  strcat(start, end);
  len = strlen(start);
  printf("%s %d\n", start, len);// C3coding, 8이 출력됨
  return 0;
}

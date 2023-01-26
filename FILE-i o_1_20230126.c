#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *in = fopen("StringFile.txt", "r");
  char str1[10];
  char str2[20];
  char str3[30];

  if (in == NULL)
  {
    printf("파일없음\n");
    exit(1);
  }
  fgets(str1, sizeof(str1), in);
  fgets(str2, sizeof(str2), in);
  fgets(str3, sizeof(str3), in);

  puts(str1);
  printf("%s", str2);

  fputs(str3, stdout);  //stdout = standard output (=모니터)
  
  fclose(in);
  
  return 0;
}



/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *out = fopen("StringFile.txt", "ㄱ");
  char str1[] = "Hello C3Coding";
  char str2[] = "안녕하세요 씨큐브코딩입니다";

  if (out == NULL)
  {
    printf("파일없음\n");
    exit(1);
  }

  fputs("문자열 출력\n", out);
  fputs(str1, out);
  fputs("\n", out);          // 파일에 입력
  fputs(str2, out);
  
  fclose(out);
  
  return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n,a,p,c;
  char m;
  a = 0;
  p = 0;
  c = 0;
  
  printf("choose your language_언어를 선택하세요\n");
  printf("E : English , K : 한국어\n");

  scanf("%c",&m);
  if(m == 69)
  {
    printf(" enter a numer : _");
    scanf("%d",&n);
  
    for(i = 1;i<=n;i++)
      {
         printf("%d : ",i);
      for(j=1;j<=i;j++)
        {
          if(i%j==0)
          {
             printf("%d ",j);
             a++;
          }
        }
        printf(" -> %d ",a);
        if(a==2)
      {
        printf(" , prime number");
        p++;
      }
      else
      {
        printf(" , composite number");
      }
      a=0;
      printf("\n");
    }
  c = n - p;
  printf("\n number of prime number : %d",p);
  printf("\n number of composite number : %d",c);
  }
  
  if(m == 75)
  {
     printf(" 숫자를 입력하세요 : _");
  scanf("%d",&n);

  for(i = 1;i<=n;i++)
    {
       printf("%d : ",i);
      for(j=1;j<=i;j++)
        {
          if(i%j==0)
          {
           printf("%d ",j);
           a++;
          }
        }
      printf(" -> %d ",a);
      if(a==2)
      {
        printf(" , 소수");
        p++;
      }
      else
      {
        printf(" , 합성수");
      }
      a=0;
      printf("\n");
    }
  c = n - p;
  printf("\n 소수개수 : %d",p);
  printf("\n 합성수 개수 : %d",c);
  }
  
 
  return 0;
}

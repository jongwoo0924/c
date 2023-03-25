#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n,a,p,c;
  char m;
  a = 0;
  p = 0;
  int d = 0;
  
  printf("choose your language_언어를 선택하세요\n");
  printf("E : English , K : 한국어\n");

  scanf("%c",&m);
  if(m == 69)
  {
    printf(" enter a numer : _");
    scanf("%d",&n);

    printf(" enter the number of divisors : _");
    scanf("%d",&d);
    
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
      if(a==d)
      {
        p++;
      }
      printf("\n");
        a = 0;
      }
  printf("\n Number of numbers with %d divisors : %d",d,p);
     }
  
  if(m == 75)
  {
     printf(" 숫자를 입력하세요 : _");
  scanf("%d",&n);

    printf("약수의 개수를 입력하세요 : _");
    scanf("%d",&d);
    
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
      if(a==d)
      {
        p++;
      }
      printf(" -> %d ",a);
      a = 0;
      printf("\n");
    }
  printf("\n %d개의 약수를 가진 수의 개수 : %d", d,p);
  }
  
 
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n,a,p,c;
  char m;
  a = 0;
  p = 0;
  int mode = 0;
  int d = 0;
  
  printf("choose your language_언어를 선택하세요\n");
  printf("E : English , K : 한국어\n");

  scanf("%c",&m);
  if(m == 69 || m == 101)
  {
    printf("choose the mode\n");
    printf("1 : calculate one number , 2 : calculate to input value : _");
    scanf("%d", &mode);
    if(mode == 1)
    {
      printf("enter a number : _");
      scanf("%d",&n);

      printf("%d : ",n);
      for(i = 1;i<=n;i++)
      {
        if(n%i == 0)
        {
          printf("%d ",i);
          a++;
        }
      }
      printf("\n the number of divisors of %d : %d",n,a);
    }
    if(mode == 2)
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
        

     }
  
  if(m == 75 || m == 107)
  {
    printf("모드를 선택하세요\n");
    printf("1 : 수 1개만 계산 , 2 : 입력한 수 까지 계산 : _");
    scanf("%d", &mode);
    if(mode == 1)
    { 
      printf("숫자를 입력하세요 : _");
      scanf("%d",&n);

      printf("%d : ",n);
      for(i = 1;i<=n;i++)
      {
        if(n%i == 0)
        {
          printf("%d ",i);
          a++;
        }
      }
      printf("\n %d의 약수의 개수 : %d",n,a);
    }
    if(mode == 2)
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
    

  }
  
 
  return 0;
}

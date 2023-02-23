#include <stdio.h> //STanDard Input Output
#include <stdlib.h> //STanDard LIBrary

int main(void)
{
  int a = 10;    //스택
  int arr[100];  //스택
  int n;
  scanf("%d",&n);

  int *p = (int *)malloc( (sizeof(int)) *n );// malloc = Memory ALLOCation
                  // malloc(a) => a만큼 메모리 확보,p에게 주소값전달
                  //malloc( (sizeof(자료형)) *n) => 자료형의 크기만큼 n에 곱함

  for(int i = 0; i<n ; i++)
    {
      p[i] = i * 10;
    }
  for(int i = 0; i<n ; i++)
    {
      printf("%d ",p[i]);
    }
  free(p);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

 int main (void)
 {
    /*  int a = 10;
  int *p = &a;
  printf(" a = %d\n",a);
  printf(" p = %d\n",*p);
  printf("&a = %u\n",&a);*/   //%u = unsigned 부호를 없앤다 ex) printf("%u",-1) => 1

  int arr[3] = {10,20,30};
  printf("\n%u\n",&arr[0]);
  printf("\n%u\n",&arr[1]);
  printf("\n%u\n\n",&arr[2]);
  printf("\n%u\n",arr);      //arr은 그 안의 값이 아닌 주소값을 의미
  printf("\n%u\n",arr+1);    //arr+1 은 arr의 주소값 +4 즉 arr[2]를 뜻한다
  printf("\n%u\n\n",arr+2);  //
  printf("\n%d %d\n", arr[0], *(arr)+0);      //arr[0]은 arr의 첫번째 값을 직접적으로 의미함
  printf("\n%d %d\n", arr[1], *(arr)+1);      //*(arr)은 arr의 첫번째 값을 주소값으로 간접적으로 나타냄
  printf("\n%d %d\n\n", arr[2], *(arr)+2);    //*(arr)+1은 arr의 첫째 값에 1을 더함
  
  //int arr= {10, 20, 30}
  int *ap = arr;
  printf("%u %u\n", ap, arr);
  printf("%u\n", ap +1);  // =>ap주소값 + 4 |  printf("\n%d\n",arr+1);
  printf("%u\n\n",ap +2); // =>ap주소값 + 8 |  printf("\n%d\n\n",arr+2);  와 같다
  
  printf("%d %d\n", *(ap + 0), ap[0]); // =>10 |  printf("\n%d %d\n", arr[0], *(arr)+0);
  printf("%d %d\n", *(ap + 1), ap[1]); // =>20 |  printf("\n%d %d\n", arr[1], *(arr)+1);  와 같다
  printf("%d %d\n", *(ap + 2), ap[2]); // =>30 |  printf("\n%d %d\n\n", arr[2], *(arr)+2);
  

  return 0;
 }

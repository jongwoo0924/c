#include <stdlib.h>
#include <stdio.h>
int main() {
  int a = 10;//직접
  int * p = &a;//간접(a값을 간접적으로 나타냄)
  printf("%d\n",a);
  printf("%d\n, &a");
  printf("%d\n",p);
  printf("%d\n", *p);
  a=a+3;//a = 13
  printf("%d\n",a);
  *p = *p*3;
  printf("%d\n", a);
  
  return 0;
}

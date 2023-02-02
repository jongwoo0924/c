#include <stdio.h>
#include <stdlib.h>

void function(void) {
  static int cnt = 0;
  cnt++;
  printf("%d\n", cnt);
}
int main(void) {
  function();
  function();
  function();
  function();
  return 0;
}

/* int main(void)
{
  int a,b;

  a = 12;
  b = 20;
  printf("a = %d, b = %d  \n",a,b);// 12, 20

  {
    int a,c;

    a = 30;
    c = 50;
    printf("a = %d, b = %d, C = %d  \n",a,b,c); //30, 20, 50

    a = 90;
    b = 45;
    c = 75;
  }

  printf("a = %d, b = %d  \n",a,b);//12, 45

  return 0;
} */

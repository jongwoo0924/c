#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[80];

  fgetf(str,sizeof(str),stdin);
  printf("%s\n", str);
  
  return 0;
}

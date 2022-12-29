#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int ar1[3][4] = {0};
  int ar2[ ][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int ar3[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

  int i,j,n;

  /*for(n=0;n<=3;n++)
  {
    
  }*/
  for(j=0;j<3;j++)
      {
        for(i=0;i<4;i++)
        {
          printf("%2d ", ar3[j][i]);
        }
        printf("\n");
      }
  return 0;
}

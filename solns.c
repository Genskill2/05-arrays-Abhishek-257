/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[],int y)
{
  int i,j,MAX;
  i=0;
  MAX=x[0];
  for(j=i+1; j<y; j++)
  {
    if(x[j]>MAX){
      MAX=x[j];
    i++;
    }
  }
    return MAX;
}

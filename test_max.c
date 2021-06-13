#include <stdio.h>
#include <assert.h>

int max(int x[], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  int y=7;
 
  printf("%d",max(x, y));
}
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

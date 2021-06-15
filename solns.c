
int max(int x[], int y);
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
int mode(int a[], int n)
{
  int count,i,max=0,t[n];
  for(i=0; i<n; i++) {
    t[i]=0;
    for(int j=0; j<n; j++){
        if(a[j]==a[i])
           t[i]++;
    }
     if(t[i] > max){
     max=t[i];
     count=i;
     }
   }
   return a[count];
}
      
      
int min(int x[],int y)
{
  int i=0,j,MIN;

  MIN=x[0];
  for(j=i+1; j<y; j++)
  {
    if(x[j] < MIN){
      MIN=x[j];
      i++;
    }
  }
    return MIN;
}

float average(int x[], int n)
{
  float avg,sum=0;
  int i;
  for(i=0; i<n; i++)
    sum+=x[i];
  avg=sum/n;
  return avg;
} 
 



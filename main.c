#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int i,n;
  float avg;
  printf("enter the number of elements:-");
  scanf("%d",&n);
  int sum=0;
  int a[n];
  printf("enter the number:");
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      sum=sum+a[i];
  }
  avg =(float) sum/n;
  float var=0;
  for(i=0;i<n;i++)
  {
      var +=((a[i]-avg)*(a[i]-avg)/n);
  }
  float st_dev= sqrt(var);
  printf("the sum of the number is:%d",sum);
  printf("the average  of the number is:%f",avg);
  printf("the variance:%f and standard deviationis:%f",var,st_dev);
  return 0;
  }














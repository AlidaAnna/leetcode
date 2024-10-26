#include<stdio.h>
void main()
{
   
    int a[5]={2,7,9,3,1};
     int sum=a[0];
    for(int i=0;i<5;i=i+2)
    {
            sum=sum+a[i];
    }
      printf("%d",sum);
}
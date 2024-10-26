#include<stdio.h>
void main()
{
   int n=4,temp;
   int a[4]={3,4,-1,1};
   for( int i=0;i<n;i++)
   {
    while(a[i]>0 && a[i]<=n && a[a[i]-1]!=a[i])
    {
     temp=a[i];
     a[i]=a[temp-1];
     a[temp-1]=temp;
    }
   }
   for(int i=0;i<n;i++)
   {
   printf("%d",a[i]);
   }
}
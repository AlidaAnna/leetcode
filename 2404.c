#include<stdio.h>
void main()
{
    int n=7;
    int a[20]={0,1,2,2,4,4,1};
    int freq[1001]={0};
    int maxf=0;
    int result=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            freq[a[i]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((freq[a[i]]>maxf)||(freq[a[i]]== maxf && a[i]<result))
        {
            maxf=freq[a[i]];
            result=a[i];
        }
    }
   printf("%d",result);
}
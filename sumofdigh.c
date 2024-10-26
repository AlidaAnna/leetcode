#include<stdio.h>
void main()
{
    int a=12345;
    int sum=0;
    int digit;
    while(a!=0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("%d",sum);
}
#include<stdio.h>
void main()
{
    int n=5;
    int l=n*2-1;
    int j;
    for(int i=1;i<=l;i++)
    {
        for(j=n;j<=5;j++)
        {
          if (j < n - 1 - i) { 
                printf("%d", n - i); 
            } else {
                printf("%d", n - 1); 
            }
        }
        printf("\n");
    }
}
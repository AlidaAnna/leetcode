#include<stdio.h>
void main()
{
    int i,j,numsSize=7;
    int nums[7]={2,2,1,1,1,2,2};
    int count;
     int can;
     can=nums[0];
     count=1;
     for (int i=1;i<numsSize;i++)
     {
                 if(nums[i]==can)
                    {
                        count=count+1;
                    }
                 else
                 {
                    count--;
                 }
             if(count==0)
             {
                can=nums[i];
                count=1;
             }
        }
        count=0;
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]==can)
            {
                count++;
            }
        }
        if(count>numsSize/2)
        {
           printf("%d",can);
        }
    }

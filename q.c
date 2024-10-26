#include<stdio.h>
#define max 20
int rear=-1;
int front=-1;
int q[max];
void insert()
{
    int data,c;
    do
    {
    printf("Enter data");
    scanf("%d",&data);
    if(rear==max-1)
    {
        printf("full");
    }
    else if(rear==-1 && front==-1)
    {
      front=0;
    }
    rear=rear+1;
    q[rear]=data;
    printf("1");
    scanf("%d",&c);
    }
    while(c==1);
}
void dis()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d",q[i]);
    }
}
void del()
{
    int temp;
    if(rear==-1)
    {
        printf("empty");
    }
    else if(rear==front)
    {
        front=-1;
        rear=-1;
    }
    else
    {
    temp=q[front];
    front=front+1;
    }
     dis();

}
void main()
{
    insert();
    dis();
    del();
}
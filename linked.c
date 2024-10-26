#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL,*newnode;

void create()
{
    struct node *curptr;
char ch;
do
{
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter data");
 scanf("%d",&newnode->data);
newnode->link=NULL;
 if(head==NULL)
 {
    head=newnode;
    curptr=newnode;
 }
 else
 {
curptr->link=newnode;
curptr=newnode;
}
printf("Y");
scanf(" %c",&ch);
} 
while(ch=='y'||ch=='Y');
}
void display()
{
    struct node *p=head;
    if(head==NULL)
    {
        printf("empty");
    }
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->link;
    }
}
void first()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
    }
    newnode->link=head;
    head=newnode;
    display();
}
void last()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    struct node *p=head;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=newnode;
    newnode->link=NULL;
    display();

}
void btwn()
{
    int info;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
     printf("Enter info");
     scanf("%d",&info);
     struct node *p=head;
     while(p!=NULL)
     {
        if(p->data==info)
        {
            newnode->link=p->link;
            p->link=newnode;
        }
        p=p->link;
     }
     display();

}
void dfirst()
{
   struct node *p=head;
   head=p->link;
   free(p);
   display();
}
void dlast()
{
    struct node *p=head;
     struct node *q=head;
    while(p->link!=NULL)
    {
        q=p;
        p=p->link;
    }
    q->link=NULL;
    free(p);
    display();

}
void dbtwn()
{
int info;
struct node *p=head;
struct node *q=head;
printf("Info");
scanf("%d",&info);
while(p!=NULL)
{
    q=p;
    p=p->link;
    if(p->data==info)
    {
        q->link=p->link;
        free(p);
    }
    display();
}
}
void main()
{
create();
display();
first();
last();
btwn();
dfirst();
dlast();
dbtwn();
}
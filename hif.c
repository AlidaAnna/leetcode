#include<stdio.h>
void main()
{
    int a=5;
    if(a>=1 && a<=9)
    {
        switch(a)
        {
            case 1:
            printf("one");
            break;
              case 2:
                printf("two\n");
                break;
                case 3:
                printf("three\n");
                break;
                case 4:
                printf("four\n");
                break;
                case 5:
                printf("five\n");
                break;
                case 6:
                printf("six\n");
                break;
                case 7:
                printf("seven\n");
                break;
                case 8:
                printf("eight\n");
                break;
                case 9:
                printf("nine\n");
                break;
        }
    }
    else{
        printf("Greater than 9");
    }
}
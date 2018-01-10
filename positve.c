#include <stdio.h>
void main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    {
        if(num>0)
        printf("positive number");
        if(num<0)
        printf("negative number");
        else
        printf("zero");
    
    }
}


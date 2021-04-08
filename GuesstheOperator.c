#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char max;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<0)
    {
        if(b<0)
        {
            max='*';
        }
        else
            max='-';
    }
    else if(a==0)
    {
        if(b==0)
        {
            printf("Any operator\n");
        }
        else if(b>0)
            max='+';
        else
            max='-';
    }
    else if(a>0)
    {
        if(b<0)
        {
            max='-';
        }
        else if(b==0)
            max='+';
        else
            max='*';
    }
    printf("Operator %c",max);
}


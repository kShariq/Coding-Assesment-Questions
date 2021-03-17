#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[10];
    scanf("%s",ch);
    int key,i,a;
    scanf("%d",&key);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            a=ch[i]-key;
            if(a<65)
            {
                ch[i]=ch[i]+26-key;
            }
            else
                ch[i]=ch[i]-key;
        }
        else{
            a=ch[i]-key;
            if(a<97)
                ch[i]=ch[i]+26-key;
            else
                ch[i]=ch[i]-key;
        }
    }
    printf("%s",ch);
}

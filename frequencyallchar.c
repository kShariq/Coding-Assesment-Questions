#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main()
{
    int freq[26];
    int len,i;
    char str[MAX_SIZE];
    printf("Enter any string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            freq[str[i]-97]++;
        else if(str[i]>='A' && str[i]<='Z')
            freq[str[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]!=0)
            printf("%c occurs %d times.\n",i+97,freq[i]);
    }
}

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define str_size 100
int main()
{
    char str[str_size];
    int i=0, wrd=1;
    fgets(str, sizeof str, stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }
        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd-1);
}


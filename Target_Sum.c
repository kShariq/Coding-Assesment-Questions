#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,tar;
    scanf("%d",&n);
    scanf("%d",&tar);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0,sum=0;
    while(j<n){
    for(int i=j+1;i<n;i++)
    {
        sum=arr[j]+arr[i];
        if(sum==tar)
        {
            printf("%d %d",j,i);
            break;
        }
    }
    j++;
    }


}

#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int sort(int score[], int n)
{
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(score[j]<score[j+1])
            {
                swap(&score[j],&score[j+1]);
            }

        }
    }
}

int main()
{
    int n,k;
    scanf("%d",&n);
    int score[n];
    for(k=0;k<n;k++)
    {
        scanf("%d",&score[k]);
    }
    sort(score,n);

    int rank[n];
    rank[0]=1;
    for(k=1;k<n;k++)
    {
        if(score[k]==score[k-1])
        {
            rank[k]=rank[k-1];
        }
        else{
            rank[k]=k+1;
        }
    }
    for(k=0;k<n;k++)
        printf("%d ",rank[k]);

    int cutoff,count=0;
    printf("\nKey:");
    scanf("%d",&cutoff);
    for(k=0;k<n;k++)
    {
        if(rank[k]<=cutoff)
            count++;
    }
    printf("\n");
    printf("%d",count);
}

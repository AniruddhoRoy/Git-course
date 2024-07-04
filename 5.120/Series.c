#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last digite = ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        printf("%d",i);
        sum=sum+i;
        if(i>0 && i<n-1)
        {
            printf("+");
        }
        if(i==n || i==n-1)
        {
            printf("=%d",sum);
        }

    }
    return 0;
}

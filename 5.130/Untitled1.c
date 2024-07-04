#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a value =");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i*i;
        printf("%d^2",i);
        if(i>0 && i<n-1)
        {
            printf("+");
        }
    }
    printf("=%d",sum);
    return 0;
}

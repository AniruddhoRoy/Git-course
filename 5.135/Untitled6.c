#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last value =");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        result=result*i*i;
        if( i == 1)
        {
            printf("(1^2)*");
        }
        else if(i==n)
        {
            printf("(%d^2)",i);
        }
        else{
            printf("(%d^2)*",i);
        }
    }
    printf("=%d",result);
}

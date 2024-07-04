#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter last value =");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*i;
        if( i == 1)
        {
            printf("1*");
        }
        else if(i==n)
        {
            printf("%d",i);
        }
        else{
            printf("%d*",i);
        }
    }
    printf("=%d",result);
}

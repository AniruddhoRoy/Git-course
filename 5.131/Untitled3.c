#include<stdio.h>
int main()
{
    double n,sum=0,i;


    printf("Enter a number = ");
    scanf("%lf",&n);

    for(i=1; i<=n ; i++)
    {
        sum=sum+(1/i);
        if(i!=1)
        {
            printf("1/%lf",i);
        }
        else{
            printf("1");
        }


        if( i>=1 && i<n)
        {
            printf("+");
        }
    }
    printf("=%lf",sum);

    return 0;
}

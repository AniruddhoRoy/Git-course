#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers you want between 1-100 = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value of %d digit =",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Value of sum is = %d\n",sum);
    printf("Average is = %f",(float)sum/5);


}


#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How many numbers =");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value of %d digit =",i+1);
        scanf("%d",&num[i]);
    }
    int min= num[0];
    for(i=1 ; i<n ;i++)
    {
        if(min > num[i])
        {
            min= num[i];
        }
    }
    printf("Minimum = %d\n",min);
}

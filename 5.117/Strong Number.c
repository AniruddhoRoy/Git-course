#include<stdio.h>
int main()
{
    int n,temp,rem,sumf=0,i,factorial=1;
    printf("Enter a Number =");
    scanf("%d",&n);
    temp=n;

    while(temp != 0)
        {
            rem=temp%10;
            temp=temp/10;
            for(i=1;i<=rem;i++)
            {
               factorial=factorial*i;

            }
            sumf=sumf+factorial;
            factorial=1;
        }
        printf("Strong value = %d \n",sumf);
        if(sumf==n)
            {
               printf("Strong Number");
            }
        else{
            printf("Not A Strong Number");
        }

        return 0;
}

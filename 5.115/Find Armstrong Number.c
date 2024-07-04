#include<stdio.h>
int main()
{
    int initialnum,num, rem,temp,sum=0,finalnum,i;
    printf("Enter a Initial Value = ");
    scanf("%d",&initialnum);
    printf("Enter a Final Value = ");
    scanf("%d",&finalnum);
    for(i=initialnum; i<=finalnum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            rem= temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }

        if(sum==i)
        {
            printf("%d is a Armostrong Number \n",i);
        }
        sum=0;
    }
    return 0;

}

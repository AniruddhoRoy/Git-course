#include<stdio.h>
int main()
{
    int num, rem,temp,sum=0;
    printf("Enter a number = ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem= temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    if(sum==num)
        {
            printf("%d is a Armostrong Number",sum);
        }
    else{
        printf("%d is not a Armostrong Number",sum);
    }

    return 0;

}

#include<stdio.h>
int main()
{
    int num , i, factorial=1;
    while(1)
        {



    printf("Enter any number = ");
    scanf("%d",&num);

    for(i=1; i<=num ; i++)
    {
            factorial= factorial*i;
    }


    printf("%d! = %d \n",num,factorial);

       factorial=1;

     }

    return 0;

}

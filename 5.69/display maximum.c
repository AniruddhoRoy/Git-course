#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 number =");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("number one is maximum");
    }
    else if(num2>num1 && num2>num3){
        printf("number two is maximum");
    }
    else if(num2==num1 || num2==num1){
        printf("two or three number are equal");
    }

    else{
        printf("number three is maximum");
    }


}

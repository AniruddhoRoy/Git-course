#include<stdio.h>
int main()
{
    int num1 ,num2;

    printf("Entre num1 and num2 =");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("num1 is big");
    }
    else if(num2>num1){
        printf("num2 is big");
    }
    else{
        printf("numbers are equal");
    }
    return 0;
}

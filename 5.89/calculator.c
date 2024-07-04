#include<stdio.h>
int main()
{
    float num1,num2,result;
    char sign;

    printf("what you want +,-,*,/ = ");

    scanf("%c",&sign);
    printf("enter two number =");
    scanf("%f %f",&num1, &num2);

    switch(sign)
    {
    case '+':
        result=num1+num2;
        printf("Result is =%.2f",result);

        break;

    case '-':
        result=num1-num2;
        printf("Result is =%.2f",result);

        break;

    case '*':
        result=num1*num2;
        printf("Result is =%.2f",result);

        break;

    case '/':
        result=num1/num2;
        printf("Result is =%.2f",result);

        break;
    default:
        printf("enter right number !");
    }

getch();

}

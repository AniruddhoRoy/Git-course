#include<stdio.h>
int main()
{
   int num1 , num2, sum  ;
   float avg;
    printf("enter two numbers = ");
    scanf("%d %d", &num1,&num2);
    sum = num1 +num2;
    printf("sum is = %d \n",sum);
    avg= (float)sum/2;
    printf("avg is = %f",avg);
    return 0;
}

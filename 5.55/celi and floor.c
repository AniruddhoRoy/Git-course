#include<stdio.h>
#include<math.h>
int main()
{
    double x=-3.6;

    double result1 = ceil(x);
    double result2 = floor(x);

    printf("ceil(%lf) is =%lf , floor(%lf) is =%lf",x,result1,x,result2);
}

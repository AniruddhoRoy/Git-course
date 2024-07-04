#include<stdio.h>
int main()
{
   double a,b,c,s,area;
   printf("enter 3 value=");
   scanf("%lf %lf %lf",&a,&b,&c);
   s = 0.5*(a+b+c);
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("area= %.4lf",area);



    return 0;
}

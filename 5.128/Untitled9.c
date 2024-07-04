#include<stdio.h>
int main()
{
  float n,i,sum=0;
  printf("Enter a number = ");
  scanf("%f",&n);
  for(i=1.5;i<=n;i=i+1)
  {
      printf("%.2f ",i);
      sum=sum+i;

  }
  printf("=%.2f",sum);
      return 0;
}


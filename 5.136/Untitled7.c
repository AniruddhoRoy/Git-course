#include<stdio.h>
int main()
{
  int n,i,even=0,odd=0;
  printf("enter the last term =");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      if(i%2==0)
      {
          even=even+i;

      }
      else
      {
          odd=odd+i;

      }
  }
  printf("Sum = %d \n",odd-even);


    return 0;
}

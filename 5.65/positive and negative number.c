#include<stdio.h>
int main()
{
    int num;
    printf("enter any number=");
    scanf("%d",&num);
    if(num==0){
        printf("number = ZERO");
    }

     else if(num<0){
        printf("number = negative");
    }
      else{
        printf("number=Positive");
    }
    getch ();
}

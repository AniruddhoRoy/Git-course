#include<stdio.h>
int main()
{
    float marks;
    printf("enter your marks =");
    scanf("%f",&marks);
     if(marks>100 || marks<0){
       printf("please enter right number");
    }
      else if(marks<=100 && marks>=80){
        printf("you got A+");
    }
    else if(marks<=79 && marks>=70){
        printf("you got A");
    }
    else if(marks<=69 && marks>=60){
        printf("you got A-");
    }
    else if(marks<=59 && marks>=50){
        printf("you got B");
    }
    else if(marks<=49 && marks>=40){
        printf("you got C");
    }
    else if(marks<=33 && marks>=39){
        printf("you got D");
    }
     else if(marks<33 && marks>=0){
        printf("you got F");
    }

    getch ();
}

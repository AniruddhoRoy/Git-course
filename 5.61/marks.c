#include<stdio.h>
int main()
{
    float marks;
    printf("enter your marks =");
    scanf("%f",&marks);
     if(marks>100){
        printf("Enter correct marks");
    }
    else if(marks>=80){
        printf("you got A+\n");
    }
     else if(marks>=70){
        printf("you got A\n");
    }
     else if(marks>=60){
        printf("you got A-\n");
    }
     else if(marks<=33){
        printf("you got F\n");
    }
    else {
        printf("Enter correct marks");
    }
    getch ();
}

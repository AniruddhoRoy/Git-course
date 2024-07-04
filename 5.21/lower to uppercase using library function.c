#include<stdio.h>
int main()
{
    char lower , upper;
    printf("enter a lower-case letter=");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("Uppercase letter=%c",upper);
    return 0;
}

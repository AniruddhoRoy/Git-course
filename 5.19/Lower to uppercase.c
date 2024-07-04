#include<stdio.h>
int main()
{
    char lower;
    printf("enter a lower case letter=");
    scanf("%c",&lower);
    printf("Uppercase letter=%c",lower-32);
    return 0;
}

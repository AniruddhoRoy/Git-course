#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter=");
    scanf("%c",&ch);
    if( ch>='A' && ch<='Z'){
        printf("%c is a Capital letter",ch);

    }
    else if( ch>='a' && ch<='z'){
        printf("%c is a Small letter",ch);

    }
    else{
        printf("not a letter");
    }
    getch();
}

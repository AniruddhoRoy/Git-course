#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter row number =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==row || col==1 || row==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,col,row,result;
    printf("Enter row number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            result=col*row;
            printf("%d ",result);
        }
        printf("\n");
    }
}

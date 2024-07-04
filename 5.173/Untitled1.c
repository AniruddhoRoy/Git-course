#include<stdio.h>
int main()
{
    int i,j,array[3][4];

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the value of ARRAY[%d][%d] =",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}


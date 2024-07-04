#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter row and column for first matrix =");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for second matrix =");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error ! c1 is not equal to r2\n");
        printf("Enter row and column for first matrix =");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for second matrix =");
        scanf("%d %d",&r2,&c2);
    }
    //Input first matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\n");
    //Input second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d] =",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    //Making result  matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0;k<c1;k++)
            {
                sum= sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
                sum=0;
        }
    }
    printf("\n");
    //print first matrix
    printf("First matrix =\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //print second matrix
    printf("Second matrix =\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
     //print result matrix
    printf("result matrix A X B =\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


}

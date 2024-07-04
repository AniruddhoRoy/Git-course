#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],row,col;
    printf("Enter row and col number =");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter the value of matrix A[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter the value of matrix B[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("MATRIX A =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX B =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nMATRIX A+B =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nMATRIX A-B =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


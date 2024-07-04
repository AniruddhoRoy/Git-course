#include<stdio.h>
int main()
{
    int first[10][10],transpose[10][10],row,col,i,j;
    printf("Enter row and column for the matrix =");
    scanf("%d %d",&row,&col);
    //Input matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\n");
    //Making result  matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]=first[i][j];
        }
    }
    printf("\n");
    //print first matrix
    printf("First matrix =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     //print transpose matrix
    printf("Transpose Matrix =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}


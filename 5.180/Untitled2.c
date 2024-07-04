#include<stdio.h>
int main()
{
    int a[10][10],row,col,i,j;
    int uppersum=0,lowersum=0;
    printf("Enter matrix row and column number = ");
    scanf("%d %d",&row,&col);
    while(row!=col)
    {
        printf("ERROR");
        printf("Enter matrix row and column number = ");
        scanf("%d %d",&row,&col);
    }
    //matrix input
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //matrix print
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //sum of upper and lower element
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                uppersum = uppersum+a[i][j];
            }
            if(i>j)
            {
                lowersum = lowersum+a[i][j];
            }
        }
    }
    printf("\nSum of uppersum element =%d",uppersum);
    printf("\nSum of lowersum element =%d",lowersum);

}

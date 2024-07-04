#include<stdio.h>
int main()
{
    int array1[100],array2[100],i,n;
    printf("Enter the number of value =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter array1 %d.no value =",i+1);
        scanf("%d",&array1[i]);
    }
    printf("array1 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\narray2 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }

}

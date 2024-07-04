#include<stdio.h>
int main()
{
    int x=10;
    printf("x1=%d\n",x++);
    printf("x2=%d\n",x);
    printf("x3=%d\n",++x);
    printf("x4=%d\n",x);
    printf("x5=%d\n",x--);
    printf("x6=%d\n",x);
    printf("x7=%d\n",--x);
    printf("x8=%d\n",x);

    return 0;
}

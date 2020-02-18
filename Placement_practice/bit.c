//practicing bit-wise operations

#include<stdio.h>

int main()
{
    int a = 10;
    int b = 4;
    int d = 1;
    int e = 2;

    int c;

    c = a|b;
    d=d<<e;

    printf("%d",c);
    printf("\n%d",a>>2);
    printf("\n%d",d);

    return 0;
}
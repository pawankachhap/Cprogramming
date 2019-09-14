// Recurssive program to find the
// Fibonacci series upto N terms

#include<stdio.h>

int fib(int);

int main()
{
    int n,i;
    printf("Enter the no. of terms in Fibonacci series : ");
    scanf("%d",&n);
    printf("Fib(%d) : 0 ",n);
    for(i=2;i<=n;++i)
    {
        printf("%d ",fib(i));
    }

    return 0;
}

int fib(int N)
{
    if(N<=3) return 1;
    else
    {
        return (fib(N-1)+fib(N-2));
    }
}
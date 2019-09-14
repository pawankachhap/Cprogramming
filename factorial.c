//recurssive program to find the factorial of N terms

#include<stdio.h>

int factorial (int);

int main()
{
    int fact=1, n;
    printf("Enter no. to find factorial : ");
    scanf("%d",&n);
    printf("Factorial(%d) = %d",n,factorial(n));

    return 0;
}

int factorial(int N)
{
    if(N<=1) return 1;
    else
    {
        return(N*factorial(N-1)) ;
    }
    
}
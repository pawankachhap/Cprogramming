/* problem 1 - Set Kth bit*/
/*Given a number N and a value K. From the right, set the Kth bit in the binary representation of N.*/
/* The position of LSB(or last bit) is 0, second last bit is 1 and so on.*/
/*Also, 0 <= K < X, where X is the number of bits in the binary representation of N.*/

#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    int n[20],k[20],i,p=0,q[20];

    for(i=T;i>0;i--)
    {
        scanf("%d%d", &n[i],&k[i]);
        p=1<<k[i];
        q[i]=n[i]|p;
    }

    for(i=T;i>0;i--)
    printf("%d\n",q[i]);

    return 0;
}
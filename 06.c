//program to calculate factorial of a given number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("\nEnter a number to calculate its factorial :");
    scanf("%d",&n);
    if(n)
    {
        for(i=1;i<=n;i++)
        fact=fact*i;
    printf("\nFactorial of %d is %d.\n",n,fact);
    }
    else
        printf("\nFactorial is 1.\n");
    return 0;
}

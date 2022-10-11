//program to calculate sum of n even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter a number to calculate sum of n even numbers :");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
        sum=sum+i;
    printf("\nSum of %d even numbers = %d \n",n,sum);
    return 0;
}


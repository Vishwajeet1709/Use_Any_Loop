//program to calculate sum of n odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter a number to calculate sum of n odd numbers :");
    scanf("%d",&n);
    for(i=1;i<=n*2;i+=2)
        sum=sum+i;
    printf("\nSum of %d odd numbers = %d \n",n,sum);
    return 0;
}


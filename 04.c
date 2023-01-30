//program to calculate sum of square of first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter a number to calculate sum of square of n numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    printf("\nSum of square of first %d numbers = %d \n",n,sum);
    return 0;
}



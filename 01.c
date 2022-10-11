//write a program to calculate sum of n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter a number to calculate sum of n numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("\nSum of %d numbers = %d \n",n,sum);
    return 0;
}

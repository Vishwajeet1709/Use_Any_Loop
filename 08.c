//Check whether the number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number to check whether it is prime or not : ");
    scanf("%d",&n);

    if(n==1 || n==2)
        flag=1;
   for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                flag=1;
        }
    if(flag)
        printf("\n %d is not a prime number.",n);
    else
        printf("\n %d is a prime number.",n);
    return 0;
}

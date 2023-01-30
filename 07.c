//program to count digits in a number
#include<stdio.h>
int main()
{
    int i=1,n,dig=0;
    printf("Enter a number to calculate its digits without zeros : ");
    scanf("%d",&n);
    while(i)
    {
        if(n%10)
            {
                dig++;
                n=n/10;
            }
        else
            {
                printf("\nThis number has %d digits in it.\n",dig);
                i--;
            }

    }

return 0;
}

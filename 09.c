// Enter any two numbers to calculate LCM
#include<stdio.h>
int main()
{
    int a,b,LCM;
//taking values from user
    printf("Enter any two numbers to calculate LCM : ");
    scanf("%d%d",&a,&b);

//finding the greatest number
    LCM = a>b ? a : b;

//logic to find LCM
    while(1)
    {
        if(LCM%a == 0 && LCM%b == 0)
            {
                printf("\n     LCM of %d and %d is %d.\n",a,b,LCM);
                break;
            }
        LCM+=1;
    }

    return 0;
}

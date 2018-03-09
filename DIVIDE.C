#include <stdio.h>

void main()
{


        int number1,number2,number3;
        printf("Enter the first number:");
        if(scanf("%d",&number1)==1)
        {
                printf("Enter the second number:");
                if(scanf("%d",&number2)==1)
                {
                number3=number1/number2;
                printf("The division is =%d",number3);
                }
                else
                {
                        printf("Error,try again.");
                }
        }
        else
        {
                printf("error,enter correct value");
        }
}



#include <stdio.h>

void main()
{
    int n;
    long long product=1ll;

    
    printf("Enter any number to calculate product of digit: ");
    scanf("%d", &n);

   
    while(n != 0)
    {
        /* Get the last digit from n and multiplies to product */
        product = product * (n % 10);

        
        n = n / 10;
    }

    printf("Product of digits = %lld", product);

  getch();
}

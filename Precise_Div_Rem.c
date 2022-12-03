#include <stdio.h>
int main()
{
    int base, exponent, counter, result = 1, dividend, divisor, quotient, remainder;
    
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent ) ;

    // printf("Enter dividend : ");
    // scanf("%d" ,&dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    /* Calculate base^exponent by repetitively multiplying base */
    for (counter = 0; counter < exponent; counter++)
    {
        result = result * base;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    dividend = result;

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);

    printf("Remainder = %d", remainder);

    return 0;
}
#include <stdio.h>
int main()
{
    int num, i;
    // printf("Enter a positive integer: ");
    scanf("%d", &num);
    // printf("Factors of %d", num);
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
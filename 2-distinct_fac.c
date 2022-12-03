#include <stdio.h>
#include <stdlib.h>

// To count number of ways in which
// number expressed as product
// of two different numbers
int countWays(int n)
{
    // To store count of such pairs
    int count = 0;

    // Counting number of pairs
    // upto sqrt(n) - 1
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("(%d * %d)" ,i ,n/i);
            printf("\n");
            count++ ;
        }   
    }     

    // To return count of pairs
    return count;
}

// Driver program to test countWays()
int main()
{
    int n;
    scanf("%d" ,&n); 
    printf("%d" ,countWays(n));
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
int countDivisibles(int A, int B, int M)
{
    // Variable to store the counter
    int counter = 0;

    // Running a loop from A to B and check
    // if a number is divisible by M.
    for (int i = A; i <= B; i++)
        if (i % 5 == 3 && i % 6 == 1 )       //////   <---  Key to the car start
        {
            printf("%d " ,i);
            counter++;
        }
        printf("\n");

    return counter;
}

// Driver code
int main()
{
    // A and B define the range, M is the dividend
    int A , B , M ;
    scanf("%d %d %d", &A ,&B ,&M);

    // Printing the result
    printf("%d", countDivisibles(A, B, M) );

    return 0;
}
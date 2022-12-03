#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d" ,&num);
    if(num%2==0 && num%3==0 && num%4==0 && num%6==0 && num%8==0 && num%9==0  )
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
}
#include <stdio.h>

int main()
{
    int n =4, i, j;

    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= (n+1)/2; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        for(j = 1; j <= 2*(n-i); j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for(i = (n-1)/2; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        for(j = 1; j <= 2*(n-i); j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
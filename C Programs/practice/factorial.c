#include<stdio.h>

int main()
{
    long n, fact=1, i;

    printf("Please enter a number: ");
    scanf("%ld", &n);

    for(i=n; i>1; i--)
    {
        fact = fact * i;
    }

    printf("%ld! is %ld.\n", n, fact);

    return 0;
}
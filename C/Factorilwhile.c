#include<stdio.h>   

int main()
{
    Long n, fact=1, i;

    printf("plase enter a number:");
    scanf("%ld" &n);

    i=n;

    while(i>1)
    {
        fact = fact * i;
        i=i-1;
    }

    printf("%ld! is %ld.\n" , n, fact);

    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    c=a-b;

    printf("The difference is  %d\n", c);

    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number");
    scanf("%d", &a);
    printf("Enter anoter number");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d\n" , c);
    return 0;
}
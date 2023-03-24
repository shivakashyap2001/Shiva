#include<stdio.h>
#include<conio.h>

int main()

{
	int a=20, b=50, c;

	c=a;
	b=c;
	a=b;

	printf("The value of a & b after swapping are %d and %d, respectively.\n",a,b);

	return 0;

}
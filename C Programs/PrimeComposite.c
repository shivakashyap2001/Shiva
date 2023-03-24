#include<stdio.h>

int main()
{
	int n, i, f=0;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	
	if(f==2)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is a composite number.\n", n);
	}
	
	return 0;
}

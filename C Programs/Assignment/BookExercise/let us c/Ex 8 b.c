#include<stdio.h>
void main()
{
	int arr[100];
	int n,i,f=0;
	clrscr();
	
	printf("Enter total elements of array(n):");
	scanf("%d",&n);
	
	printf("\n\nenter\"n\'elementsof array:\n\n");
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	clrscr();
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[n-(i+1)])
		
	{
		/*if element is equal, according to the problem, it will be printed*/
		f=f+1
		printf("element no:%d = %d",i,arr[i]);
	}
	
	}
	
	if(f==0)
	printf("\n\nNO such element found.\n");
	
	getch();
	
	}
	 
// Online C compiler to run C program online
#include <stdio.h>
#include<conio.h>


void quicksort(int a[25],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
	first=pivot;
	i=first;
	j=last;
	
	while(i<j)
	{
		while(a[i]<=a[pivot]&&i<last)
		i++;
		while(a[j]>a[pivot])
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
       temp=a[pivot];
       a[pivot]=a[j];
       a[j]=temp;
       quicksort(a,first,j-1);
       quicksort(a,j+1,last);
       
}
}
int main()
{
	int a[25],i,j,n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Elements Are");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("Sorted array is");
    scanf("%d",a[i]);
    for(i=1;i<n;i++)
	printf(" %d",a[i]);
    return 0;

    }
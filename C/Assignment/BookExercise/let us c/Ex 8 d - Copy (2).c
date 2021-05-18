#include,stdio.h>
void main()
{
	int i,j,a[10]={1,2,3,4,5,6,7,8,9,10};
	modify();
	clrscr();
	
	
	printf("array before modification: \n\n\");
	
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	modify(a);  /*pasing only the name of array */
	
	printf("\n\n\narray after modification:\n\n");
	
	for(i=0;i<10;i++)
	
	{ printing the array in main();*/ 
	printf("%d",a[i]);
	}
	
	getch();
}
	modify(int b[10])
	{
		int c;
	
		for(c=0;c<10;c++)
	{
		b[c]=b[c]*3;  /*multiplying each element with 3*/
	}
		return b[c];  /*returning the whole array to main();*/
	}
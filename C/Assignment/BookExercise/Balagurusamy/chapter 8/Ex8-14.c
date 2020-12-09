#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 50


void main()
{
	char Stu_Name[MAX][MAX],Name[MAX];
	int Roll_No[MAX],n=2,i,Roll,Index;
	//clrscr();
	
	
	printf("Enter Roll No.& Students Name:-\n");
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&Roll_No[i]);

		scanf("%s",Stu_Name[i]);
	}
	printf("\nEnter Student Roll No which U want to search:-\n");
	
	scanf("%d",&Roll);
	
	
	for(i=0;i<n;i++)
	{
		if(Roll==Roll_No[i])
		{
			Index=i;
		}
	}
	              
	
	printf("\n\nEnter student Name Which U want to search:-\n");
	
	scanf("%s",Name);
	
	
	
	
	for(i=0;i<n;i++)
	{
		if(strcmp(Stu_Name[i],Name)==0)
	
		{
			Index=i;
		}
	}
	
	
	printf("\n\nRoll No of is:-%d Student Whose Name is:-%s\n",Roll_No[Index],Stu_Name[Index]);
	
	//getch();
}
#include<iostream>
#include<cstring>

#define MAX 50

using namespace std;

int main()
{
	char Stu_Name[MAX][MAX], Name[MAX];
	int Roll_No[MAX],n=2,i,Roll,Index;
	//clrscr();
	
	
	cout<<"Enter Roll No.& Students Name:-\n";
	
	
	for(i=0;i<n;i++)
	{
		cin>>Roll_No[i];

		cin>>Stu_Name[i];
	}
	
	cout<<"\nEnter Student Roll No which U want to search:-\n";
	
	std::cin>>Roll;
	
	
	for(i=0;i<n;i++)
	{
		if(Roll==Roll_No[i])
		{
			Index=i;
		}
	}
	                                                                                                     
	
	cout<<"\n\nEnter student Name Which U want to search:-\n";
	
	 cin>>Name;
	
	
	
	
	for(i=0;i<n;i++)
	{
		if(strcmp(Stu_Name[i],Name)==0)
	
		{
			Index=i;
		}
	}
	
	
	cout<<"\n\nRoll of is:-"<<Roll_No[Index]<<" Student Whose Name is:-"<<Stu_Name[Index]<<endl;
	
	return 0;
}
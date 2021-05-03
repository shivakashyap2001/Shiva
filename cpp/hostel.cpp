#include<iostream.h>
#include<cstring>

using namespace std;
class hostel 
{
	int room_no;
	char name[2];
	char addresss[10];
	char phone_no[05];
	
	public:
	void main_menu();  // to display the main menu
	void add();  //to show the next room
	void display();  //to display the student details
	void rooms();  //to allocate rooms
	void edit();  //to edit the students details
	void modify();  //to modify the records
	void delete_rec(int);  //to delete the student details
};

void  hostel::main_menu()
{
	int choice;
	{
		system("cls");
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\t1.select a room";
		cout<<"\t2.student detail";
		cout<<"\t3.given room";
		cout<<"\t4.Edit detail";
		cout<<"\t5.Exit";
		cout<<"\tEnter your choice;";
		cin>>choice;
		
		switch(choice)
		{
			case 1: add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4: edit();
					break;
			case 5: 
				exit(0);
				break;
			default:
				{
					cout<<"\tWrong choice!!!!";
					cout<<"\tPress any key to continue!!";
					
				}
		}
	}
	
}                                    
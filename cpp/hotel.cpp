#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#includde<dos.h>


class hotel
{
	int room_no;
	char name[30];
	char address[50];
	char phone[10];
	
	public
	void main_menu();
	void add();
	void display();
	void rooms();
	void edit();
	int check(int);
	void modify(int);
	void delete_rec(int);
};

void hotel::main_menu()
{
	int choice;
	
	while(choice!=5)
	{
		clrscr();
		cout<<"\n\t\t\t\t****************";
		cout<<\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t****************";
		cout<<"\n\n\n\t\t\t1. Book A Room";
		cout<<"\n\t\t\t2. Customer Record";
		cout<<"\n\t\t\t3. Rooms Allotted";
		cout<<"\n\t\t\t4.  Edit Record";
		cout<<"\n\\t\t\t5. Exit";
		cout<<"\n\n\t\t\tEnter Your Choice:";
		cin??choice;
		
		switch(choice)
		{
			case 1: add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4: eidt();
					break;
			case 5: break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
}

void hotel::add()
{
	clrscr();
	int r, flag;
	ofstream fout("Record.dat" ,ios::app);
	
	cout<<"\n Enter Customer Details";
	cout<<"\n************************";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);
	
	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
	
	else
	{
		room_no=r;
		cout<<" Name:";
		gets(name);
		cout<<" Address:";
		gets(address);
		cout<<" Phone No:";
		gets(phone);
		fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked!!!";
	}
	
	cout<<"\n Press any key to continue!!";
	getch();
	fout.close();
}

void hotel::display()
{
	clrscr();
	ifstream fin("Record.dat",ios::in);
	int r,flag;
	cout<<"\n Enter room no:";
	cin>>r;
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
<<<<<<< HEAD
			clrscr():
			cout<<"\n Cusromer Details";
			cout<<"\n ****************";
			cout<<"\n\n Room no: "<<room-no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			flag
=======
			clrscr():
>>>>>>> 1ba3b01f0a3bc54c24570e5f903a2b94c402c8ef

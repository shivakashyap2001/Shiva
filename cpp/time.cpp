#include <iostream>
#include<conio.h>
using namespace std;

class Time
{
    public:
    int h, m, s;

    void input()

    {
        cout<<"Enter Hour";
        cin>>h;
        
        cout<<"Enter Minute";
        cin>>m;

        cout<<"Enter Second";
        cin>>s;
   }

   void display()
   {
    cout<<"Time is:";

    cout<<h <<":" <<m <<":" <<s;
   }
};

    int main()
    {
        Time T;
        T.input();
        T.display();

        getch();

        return 0;
    }

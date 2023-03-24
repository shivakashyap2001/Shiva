# include<iostream>

using namespace std;

class Account
{

     float x,y;
     public:
    Account(float a,float b)
    {
        x=a;
        y=b;
    }
    void display();

};

void Account::display()
{
    float c;
    c=x+y;
    cout<<"add is :"<<c;
}
 int main()
 {
    Account a1 (96.7,23.5);
    a1.display();
    return 0;
 }
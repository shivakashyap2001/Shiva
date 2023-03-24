#include<iostream>

using namespace std;

class second;
class first
{
    int x;
    public:
        void read()
        {
            cout<<"Enter the first number";
            cin>>x;
        }
        friend void max(first,second);

};

class second
{
    int y,z;
    public:
        void read()
        {
            cout<<"Enter second number";
            cin>>y;
            cout<<"Enter third number";
            cin>>z;
        }
        friend void max(first,second);
};

void max(first f, second s)
{
  int d;
  d=f.x + s.y + s.z;
  cout<<"addition of three number is ="<<d;
}

int main()
{
    first ob1;
    second ob2;

    ob1.read ();
    ob2.read ();

    max(ob1,ob2);

    return (0);
}
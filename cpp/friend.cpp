#include<iostream>

using namespace std;

class second;
class first
{
    int x;
    public:
        void read()
        {
            cout<<"Enter first number";
            cin>>x;
        }
        friend void  max(first,second);
};

class second
{
    int y;
    public:
        void read()
        {
            cout<<"Enter second number";
            cin>>y;
        }
        friend void max(first,second);
};

void max(first f, second s)
{
    if (f.x > s.y)
    cout<<"first number is greater";
    else
    cout<<"second number is greater";
}

    int main()
    {
        first ob1;
        second ob2;

        ob1.read ();
        ob2.read();

        max (ob1, ob2);

        return (0);
    }
#include <iostream>
using namespace std;

class A
{
    public:
    int a,c;
    void pmarks()
    {
        a=50;
    }
};

class B
{
    public:
    int b;
    void tmarks()
    {
        b=50;
    }
};

class C:public A,public B
{
    public:
    void sum()
    {
        c=a+b;
    }

    void display()
    {
        cout<<"Total marks="<<c;
    }
};

int main()
{
    C e;

    e.pmarks();
    e.tmarks();
    e.sum ();
    e.display();

    return 0;
}
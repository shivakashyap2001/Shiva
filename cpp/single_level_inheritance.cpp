#include <iostream>

using namespace std;

class add
{
    public:

    int a,b,c;
    public:
    void data(int x,int y)
    {
    a=x;
    b=y;
    }

    void sum()
    {
        c=a+b;
    }

};

class derived:public add
{
    public:
    void display()
    {
        cout<<"Addition is"<<c;
    }
};

int main()
{
    
    derived t;
    t. data (20,40);
    t. sum();
    t.display();

    return 0;
    

}

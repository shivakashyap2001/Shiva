# include <iostream>
using namespace std;

class A
{
    public:
    
    void id()
    {
        cout<<"Employee_id=trtdrf";
    }
};
class B:public A
{
    public:

    void name()
    {
        cout<<"Employee_name=fdgd";
    }
};

class C:public B
{
    public:

    void salary()
    {
        cout<<"Employee_salary";
    }
};

class D:public C
{
    public:

    void department()
    {
        cout<<"Employee_department";
    }
};

int main()
{

    D d;

    d.id();
    d.name();
    d.salary();
    d.department();

    return 0;

}
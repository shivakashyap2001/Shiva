#include <iostream>
using namespace std;

class test
{
    public:
    int x;
    test(int a)
    {
        x=a;
    }
    void operator -()
    {
        x= -x;
        cout<<x;
    }
};

int main()
{
    test t1 (10);
    -t1;

    return 0;
}
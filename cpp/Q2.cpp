#include<iostream>

using namespace std;

int main()
{
    int a=2, b=10;

    cout<<"Before swaping a="<<a<<"b="<<b<<endl;

    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swaping a="<<a<<"b="<<b<<endl;
    return 0;
}
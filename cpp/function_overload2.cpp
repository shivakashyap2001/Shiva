#include<iostream>
using namespace std;

void sum(int a, int b)
{
    int c;
    c= a+b;
    cout<<"addition of two number is"<<c;
}

void mult(float p, float q)
{
    float c;
    c = p*q;
    cout<<"mult of two number is"<<c;
}

void diff(int a, int b)
{
    int c;
    c= a-b;
    cout<<"diff of two numbers is"<<c;
}

int main()
{
    int a,b;
    float p,q;

    cout<<"Enter values for sum,diff";
    cin>>a>>b;

    cout<<"Enter values for mult";
    cin>>p>>q;

    sum(a,b);
    diff(a,b);
    mult(p,q);


    return 0;
}
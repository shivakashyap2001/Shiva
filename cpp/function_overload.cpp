#include<iostream>
using namespace std;

    void area (float a, float b)
    {
        float c;
        c = a*b;
        cout<<"Area of rectangle is"<<c;
    }

    void area (float a)
    {
        float c;

        c = 3.14*a*a;
        cout<<"Area of circle is"<<c;
    }
         
    void area(int p, int q)
    {
        float c;
        cout<<"Area of triangle is"<<c;
    }
    int main()
{
    float a,b;
    int p,q;

    cout<<"Enter values for area calculation";
    cin>>a>>b;

    cout<<"Enter values for triangle";
     cin>>p>>q;
     
    area(a,b);
    area(a);
    area(p,q);

    return 0;
}
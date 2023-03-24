# include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<c "is maximum";
        }
        else 
        {
            cout<<c<< "is maximum";
        }
        else
        {
            if (b>c)
            {
                cout<<b<<c "is maximum";
            }
            else
            {
                cout<<c<< "is maximum";
            }
        }
        return 0;
    }
}
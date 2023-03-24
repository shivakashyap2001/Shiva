#include <iostream>
#include <conio.h>
using namespace std;

class Factorial_Number
{
    private:
         int n,n1,f=1;
         public:

         void input();
         void calc();
         void display();

};

void Factorial_Number::input()
{
    cout<<"Please Enter a no.:"<<endl;
    cin>>n;
}
void Factorial_Number::calc()
{
    n1=n;
    if(n==0||n==1)
    cout<<" Factorial of "<<n<<" is 1"<<endl;
    else
    {
        while(n>0)
        {
            f=f*n;
            n--;
        }
    }
}
void Factorial_Number::display()
{
    cout<<"The factorial of "<<n1<<" is "<<f;
}
int main ()
{
    Factorial_Number object;
    object.input();
    object.calc();
    object.display();

    getch ();
    return 0;

}

#include<iostream>

using namespace std;

class Account
 {
    int acc;
    float salary;

    public:
    Account()
    {
        acc = 0;
        salary = 0.0;
    }
    void display()
    {
        cout<<"account = "<<acc;
        cout<<" salary = "<<salary;
    }
    Account(int a, float s)
    {
        acc = a;
        salary = s;
    }
};

    int main()
    {
        Account a1;
        a1. display();

        Account a2(10,10000.0);
         a2.display();

         Account a3;
         a3.display();
         
             Account a4(101,5000.0);
             a4.display();

          return (0);
    }
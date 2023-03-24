#include<iostream>

using namespace std;

int main()
{
     int a = 50;
     int b = 10;
     int c = 14;

     int max;

     if(a>b && a>c)
     {
        max = a;
     }
     else if (b>c)
     {
        max = b;
     }
     else 
     {
        max = c;
     }

     cout << max << endl;
} 

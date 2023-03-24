# include<iostream>

using namespace std;

class Array
{
    int a[5];
     public:
     Array();

     void show();
     Array(Array &);

     void read (); 
};

Array::Array()
{
    for(int i=0; i<5; i++)
    a[i]=0;

}
Array::Array(Array & a1)
{
    for(int i=0; i<5; i++)

    a[i]= a1.a[i];

}
void Array::read()
{
    cout<<"Enter elemets in array";
    for(int i=0; i<5; i++)
    cin>>a[i];

}

void Array::show()
{
    cout<<"Array contains";
    for(int i=0; i<5; i++)
    cout<<a[i]<<endl;
}
int main()
{
    Array obj;

    obj.read();
    obj.show();

    Array a2(obj);
    a2.show();
    return 0;
}
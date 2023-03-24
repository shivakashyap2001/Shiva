# include <iostream>
using namespace std;

class Test
{
    private:
    int x,y;
    public:test (int a, int b)
    {
        x=a;
        y=b;
    }
    friend void operator -(Test);

    friend Test operator -(Test,Test);
};

Test operator -(Test T1 , Test T2)
{
    Test temp;
    temp 'y' =T1.y -T2.y;
    temp 'x' =T1.x -T2.x;
    return temp;
}

void operator -(Test T1)
{
    T1.x=-T2.x;
    cout<< T.x;
}

int main 
{
    Test T1(5,6),T2(2,2)
    Test T3;

    T3 = T1-T2;
    T2;
    cout<<T3.x<<T3,y;

    return 0;
}
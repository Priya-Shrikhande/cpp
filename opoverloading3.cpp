//perform operator overloading using increment and decrement operator
#include<iostream>
using namespace std;
class op
{
    int a,b;
    public:
    op()
    {
        a=3;
        b=9;
    }
    void operator ++()
    {
       a=++a;
    }
    void operator --()
    {
        b=--b;
    }
    void show()
    {
        cout<<"\na= "<<a;
        cout<<"\nb= "<<b;
    }
};
main()
{
    op o;
    o.show();
    ++o;
    --o;
    o.show();
}
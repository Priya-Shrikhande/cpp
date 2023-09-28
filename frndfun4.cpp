//example of friend function common in two classes
#include<iostream>
using namespace std;
class length
{
    int l;
    public:
    length()
    {
        l=4;
    }
    friend void area();
};
class breadth
{
    int b;
    public:
    breadth()
    {
        b=6;
    }
    friend void area();
};
void area()
{
    length p;
    breadth q;
    int a=p.l*q.b;
    cout<<"area of rectngle = "<<a;
}
main()
{
    area();
}
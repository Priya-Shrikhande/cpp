//example of friend function common in two classes
#include<iostream>
using namespace std;
class sample
{
    int a;
    public:
    sample()
    {
        a=10;
    }
    friend void add();
};
class demo
{
    int b;
    public:
    demo()
    {
        b=20;
    }
    friend void add();
};
void add()
{
    int c;
    sample s;
    demo d;
    c=s.a+d.b;
    cout<<"addition= "<<c;
}
main()
{
   add();
}
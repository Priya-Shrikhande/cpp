//Unary operator overloading
#include<iostream>
using namespace std;
class op
{
int a,b;
public:
     op()
    {
     a=10;
     b=20;
    }

void operator ++()
{
a=++a;
b=b+1;
}
void show()
{
cout<<"value of a="<<a<<endl;
cout<<"value of b="<<b<<endl;
}
};
main()
{
op o;
o.show();
++o;//calling
o.show();
}
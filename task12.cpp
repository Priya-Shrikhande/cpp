#include<iostream>
using namespace std;
class demo
{
int a,b,c;
public:
void fun(int a,int b=20,int c=10);
};
void demo::fun(int a,int b,int c)
{
 int d=a+b+c;
 cout<<"Addition = "<<d;
}
main()
{
demo d1;
int a,b,c;
cout<<"Enter the value of a ,b,c\n";
cin>>a>>b>>c;
d1.fun(a);
d1.fun(a,b,c);
d1.fun(a,b);
}
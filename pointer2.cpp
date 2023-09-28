//example of pointer and address of variable
#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int *p;
    p=&a;
    cout<<"\naddress of a ="<<&a;
    cout<<"\nvalue of a ="<<a;
    cout<<"\naddress of a ="<<p;
    cout<<"\nvalue of a ="<<*p;
}
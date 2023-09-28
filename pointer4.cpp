#include<iostream>
using namespace std;
int main()
{
    char a='s',*ptr;
    ptr=&a;
    cout<<"\naddress of a = "<<(int)ptr;
    cout<<"\nvalue of a = "<<*ptr;
    *ptr='p';
    cout<<"\nswapped value of a= "<<*ptr;
}
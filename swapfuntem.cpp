#include<iostream>
using namespace std;
template <class T>
void swa(T& a,T& b)
{
    T c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int x=8,y=9;
    cout<<"\nbefore swapping: "<<x<<" "<<y;
    swa(x,y);
    cout<<"\nswapped values are:"<<x<<" "<<y;
}
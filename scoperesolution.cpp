#include<iostream>
using namespace std;
int x=100;
int main()
{
    int x=10;
    cout<<"\n Local "<<x;
    cout<<"\n Global "<<::x;
}
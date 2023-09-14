#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 2 nos=";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"\nswapped nos are="<<a<<" "<<b;
}
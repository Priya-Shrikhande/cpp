#include<iostream>
using namespace std;
int main()
{
    int p,n,r,si;
    cout<<"\nenter principle,no.of year,rate of interest=";
    cin>>p>>n>>r;
    si=p*n*r/100;
    cout<<"\nsimple interest is="<<si;
}
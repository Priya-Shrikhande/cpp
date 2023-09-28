//wap to find simple interest using pointer
#include<iostream>
using namespace std;
int SI(int *p1,int *n1,int *r1)
{
    int s;
    s=(*p1 * *n1 * *r1)/100;
    return s;
}
main()
{
    int p,n,r,si;
    cout<<"\nenter principle: ";
    cin>>p;
    cout<<"\nenter number of year: ";
    cin>>n;
    cout<<"\nenter interest rate: ";
    cin>>r;
    si=SI(&p,&n,&r);
    cout<<"\nsimple interest is: "<<si;
}
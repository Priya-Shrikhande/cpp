//wap to calculate area of circle and rectangle using function overloading
#include<iostream>
using namespace std;
float area(float);
int area(int,int);
main()
{
    int l,b,area1;
    float r,area2;
    cout<<"enter length and breadth of rectangle=";
    cin>>l>>b;
    cout<<"\n enter radius of circle=";
    cin>>r;
    area1=area(l,b);
    cout<<"\n area of reactangle is="<<area1;
    area2=area(r);
    cout<<"\n area of circle is="<<area2;
}
float area(float x)
{
    float a,pi=3.14;
    a=pi*x*x;
    return a;
}
int area(int x,int y)
{
    return x*y;
}
//function overloading
#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
float add(int,float);
main()
{
    int a,b,c,sum;
    float d,sum1;
    cout<<"enter 3 integer nums=";
    cin>>a>>b>>c;
    cout<<"\nenter 1 float number=";
    cin>>d;
    sum=add(a,b);
    cout<<"\nsum two integer nums="<<sum;
    sum=add(a,b,c);
    cout<<"\nsum of 3 integer nums="<<sum;
    sum1=add(a,d);
    cout<<"\nsum float and integer is="<<sum1;
}
int add(int x,int y)
{
    /* int s;
    s=x+y; */
    return x+y;
}
int add(int x,int y,int z)
{
    /* int s;
    s=x+y+z; */
    return x+y+z;
}
float add(int x,float y)
{
    /* float s;
    s=x+y; */
    return x+y;
}
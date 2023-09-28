#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    rectangle()
    {
        length=2;
        breadth=5;
    }
    rectangle(int x,int y)
    {
        int area;
        length=x;
        breadth=y;
        area=x*y;
        cout<<"area of rectangle is: "<<area;
    }
    rectangle(rectangle &r)
    {
         length=r.length;
         breadth=r.breadth;
         cout<<"\nperimeter of rectangle is :"<<2*(length+breadth);
    }
    void area()
    {
        cout<<"\narea of rectangle is: "<<length*breadth;
    } 
};  
main()
{
    int a,b;
    rectangle o,o1(3,4),o2(o);        //we can initialize directly 
    cout<<"\nenter length and breadth of rectangle= ";   // or we can ask user
    cin>>a>>b;
    rectangle red,red2(a,b),red3(red);
    red2.area();         //we can also call function with different class objects
    red.area();
    red3.area();
}  
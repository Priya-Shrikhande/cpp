// use of all constructors and destructor.
#include<iostream>
using namespace std;
class demo
{
    private: int a,b;
    public:
    demo()     //default constructor
    {
        a=10;
        b=20;
    }  
    demo(int x, int y)      //parameterized parameter
    {
       a=x;
       b=y;
    }
    demo(demo &ob)     //copy constructor
    {
       a=ob.a;   //d 10,20
       b=ob.b;
    }  
    void show()
    {
        cout<<"\n value of A: "<<a;
        cout<<"\n value of B: "<<b;
    } 
    ~demo()  //destructor
    {
      cout<<"\ndestructor is calling.....";
    }    
};
 main()
{
    demo d,d1(2,3),d3(d);
    d.show();
    d1.show();
    d3.show();
}
#include<iostream>
 using namespace std;
 class funov{
    int a,b,c;
    public:
    void fun(int w)
    {
        a=w;
    }
    void fun(int x,int y)
    {
        b=x;
        c=y;
    }
   
    void display()
    {
        cout<<"the values are"<<a<<b<<c;

    }
 };
 int main()
 {
    funov fv;
    fv.fun(10);
    fv.fun(20,30);
 }
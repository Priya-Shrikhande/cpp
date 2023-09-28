#include<iostream>
using namespace std;
class A
{ 
   private:int a;
   public:int get()
          {
            cout<<"enter value for A = ";
            cin>>a;
            return a;
          }
};
class B
{
   private: int b;
   public: int getin()
           {
            cout<<"\n enter value for B= ";
            cin>>b;
            return b;
           }
};
class C:public A,public B
{
   private:int c,x,y;
   public: void add()
          {
            x=get();
            y=getin();
            c=x+y;
            cout<<"\n C= "<<c;
          }
};
int main()
{
    C c;
    c.add();
}
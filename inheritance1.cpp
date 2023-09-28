#include<iostream>
using namespace std;
class A
{ 
   protected:int a;
   public:int get()
          {
            cout<<"enter value for A = ";
            cin>>a;
            return a;
          }
};
class B
{
   protected: int b;
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
            c=a+b;
            cout<<"\n C= "<<c;
          }
};
int main()
{
    C c;
    c.get();
    c.getin();
    c.add();
}
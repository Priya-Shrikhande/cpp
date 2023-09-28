#include<iostream>
using namespace std;
class base
{
    private: int a,b;
    public: void get()
             {
                cout<<"\n enter 2 no :";
                cin>>a>>b;
             } 
             void show()
             {
                cout<<"A"<<a;
                cout<<"\nB"<<b;
             }
};
class derive:public base
{
    public: void display()
            {
                get();
                show(); 
                cout<<"\ncall of base class";
            }
};
int main()
{
    derive d;
    d.display();
}
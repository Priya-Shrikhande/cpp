#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string emp_name;
    public:
    void get()
    {
        cout<<"enter employee name :";
        cin>>emp_name;
        cout<<"enter employee id :";
        cin>>id;
    }
    void put()
    {
        cout<<"\nemployee name is:"<<emp_name;
        cout<<"\nemp id is:"<<id;
    }
};
class salary:public employee
{
   private:
   int bs,ns,pf,hra;
   public:
   void sal()
   {
     get();
     put();
     cout<<"\nenter base salary of emp: ";
     cin>>bs;
     pf=0.2*bs;
     hra=0.4*bs;
     ns=bs+hra-pf;
     cout<<"emp salary is: "<<ns;
   }
};
main()
{
    salary e;
    e.sal();
}
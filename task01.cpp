#include<iostream>
using namespace std;
class employee 
{
    string name;
    int id,salary;
    public:
    
    void input()
   {
      cout<<"enter employee name= ";
      cin>>name;
      cout<<"enter employee id= ";
      cin>>id;
      
   }
void output()
{
    cout<<"\nname of employee is= "<<name<<endl;
    cout<<"employee id is= "<<id<<endl;
    //cout<<"salary of employee is= "<<salary<<endl;
}
void emp_salary()
{
    int basic_salary,pf,hra;
    cout<<"\nenter basic salary of employee= ";
    cin>>basic_salary;
    pf=0.2*basic_salary;
    hra=0.4*basic_salary;
    salary=(basic_salary+hra)-pf;
    cout<<"net salary of employee is= "<<salary;
}
};

int main()
{
   employee e;
   e.input();
   e.output();
   e.emp_salary();
}
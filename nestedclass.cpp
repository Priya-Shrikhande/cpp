#include<iostream>
using namespace std;
class student
{
    char name[20];
    int id;
    public:
    void get();
    void put();
    class address
    {
        char address[50];
        public:
        void in();
        void out();
    };
};
void student::get()
{
    cout<<"enter name :";
    cin>>name;
    cout<<"\nenter id :";
    cin>>id;
}
void student::put()
{
    cout<<"\nname= "<<name;
    cout<<"\nid ="<<id;
}
void student::address::in()
{
    cout<<"\nenter address :";
    cin>>address;
}
void student::address::out()
{
    cout<<"\naddress ="<<address;
}
main()
{
    student s;
    student::address a;
    s.get();
    s.put();
    a.in();
    a.out();
}
#include<iostream>
using namespace std;
class student
{
    private:
    int prn_no;
    char name[20];
    public:
    void get()
    {
        cout<<"\n enter PRN no and name=";
        cin>>prn_no>>name;
    }
    void put()
    {
        cout<<"\n PRN no is="<<prn_no;
        cout<<"\n student name is="<<name;
    }
};
main()
{
    /*student s,p; //instatiate
    s.get();
    s.put();
    p.get();
    p.put();*/
    /* student s[2];  // array of an object
    for(int i=0;i<2;i++)
    {
        s[i].get();
        s[i].put();
    } */
    student s,*p;
    p=&s;
    p->get();
    p->put();
}
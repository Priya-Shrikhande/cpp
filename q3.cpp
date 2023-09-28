#include<iostream>
using namespace std;
class student
{
    protected:
    int student_id;
    
    public:
    void get(int i)
    {
        student_id=i;
    }
    void put()
    {
        cout<<"\nstudent id is: "<<student_id;
    }
};
class test:public student
{
    protected:
    int mark1,mark2;
    public:
    void gets()
    {
        get();
        cout<<"\nenter marks of english subject :";
        cin>>mark1;
        cout<<"\nenter marks of science subject :";
        cin>>mark2;
    }
    void puts()
    {
        put();
        cout<<"\nmarks of subeject science :"<<mark2;
        cout<<"\nmarks of english are: "<<mark1;
    }
};
class sports
{
    protected:
    int game1,game2;
    public:
    void getin()
    {
        cout<<"\nenter grade marks of chess and carrom out of 50: ";
        cin>>game1>>game2;
    }
    void putin()
    {
        cout<<"\n grade marks of chess: "<<game1;
        cout<<"\n grade marks of carrom: "<<game2;
    }
};
class result:public test,sports
{
    protected:
    int res;
    public:
    void result1(int mark1,int mark2,int c,int d)
    {
        res=mark1+mark2+game1+game2;
        cout<<"\nresult of test and sports of student is : "<<res;
    }
};
main()
{
    student s;
    test t;
    sports sp;
    result r;
    t.gets();
    sp.getin();
    t.puts();
    sp.putin();
    r.result1();
}
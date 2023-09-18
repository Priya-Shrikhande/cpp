#include<iostream>
using namespace std;
class student
{
    private:
    int prn_no;
    char name[20];
    public:
        void get();
        void put();
};
void student::get()
{
    cout<<"\nenter prn no and name=";
    cin>>prn_no>>name;
}
void student::put()
{
    cout<<"\n prn no is:"<<prn_no;
    cout<<"\n name of student is="<<name;
}
int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].get();
        s[i].put();
    }
}
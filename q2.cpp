#include<iostream>
using namespace std;
class student
{
    private:
    int student_id;
    char student_name[20];
    public:
    void get()
    {
        cout<<"\nenter student name: ";
        cin>>student_name;
        cout<<"\nenter student id: ";
        cin>>student_id;
    }
    void put()
    {
        cout<<"\nstudent name is : "<<student_name;
        cout<<"\nstudent id is: "<<student_id;
    }
};
class science:public student
{
    private:
    char s1[20],s2[20],s3[20];
    public:
    void gets()
    {
        get();
        cout<<"\nenter three subjects name in science stream :";
        cin>>s1>>s2>>s3;
    }
    void puts()
    {
       put();
       cout<<"\nsubjects in science stream are: "<<s1<<"\n"<<s2<<"\n"<<s3;
    }
};
class commerce:public student
{
   private:
   char c1[20],c2[20],c3[20];
   public:
   void getc()
   {
    get();
    cout<<"\nenter three subjects name in commerce stream :";
        cin>>c1>>c2>>c3;
   }
   void putc()
   {
     put();
       cout<<"\nsubjects in commerce stream are: "<<c1<<"\n"<<c2<<"\n"<<c3;
   }
};
main()
{
    science s;
    s.gets();
    s.puts();
    commerce c;
    c.getc();
    c.putc();
}
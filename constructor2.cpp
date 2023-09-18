#include<iostream>
using namespace std;
class student
{
    private:
          int prn_no;
          string name,address;
          unsigned long int contact_info;
    public:
          student()          //default constructor
          {
            cout<<"\nit is default constructor"<<endl;
          }
          student(int x,string y,unsigned long int z,string add)  // parameterized parameter
          {
            prn_no=x;
            name=y;
            address=add;
            contact_info=z;
            cout<<"\n prn no is: "<<prn_no;
            cout<<"\n name of student is: "<<name;
            cout<<"\n address of student is: "<<address;
            cout<<"\n contact of student is: "<<contact_info;
          }
         /*  void show()
           {
              cout<<"\n prn no is: "<<prn_no;
              cout<<"\n name of student is: "<<name;
           } 
     */
};
main()
{
    student s1(101,"priya",1020986335,"ngp");
}
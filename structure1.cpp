#include<iostream>
using namespace std;
struct student
{
    int prn_no;
    char name[20];
}s;
main()
{
  cout<<"\n enter PRN NO and name:";
  cin>>s.prn_no>>s.name;
  cout<<"\n PRN no is="<<s.prn_no;
  cout<<"\n name of student is="<<s.name;
}
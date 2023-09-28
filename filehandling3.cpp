//Write data in a file using class.
#include<iostream>
#include<fstream>
using namespace std;
class student
{
private:
int Reg_no;
char cname[20];
public:
void setno()
{
cout<<"Enter the registration number";
cin>>Reg_no;
}
void setname()
{
cout<<"Enter the student name";
cin>>cname;
}
int getno()
{
return Reg_no;
}
char *getname()
{
return cname;
}
};
main()
{
ofstream obj("nnn.txt");
student s;
s.setno();
s.setname();
obj<<s.getno();
obj<<s.getname();
obj.close();
}

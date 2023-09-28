#include<iostream>
using namespace std;
class student
{
    private:
    int admno;              //roll no of student
    char sname[20];           // name of student
    float eng,sci,math,total;       
    float ctotal(float,float,float)      //ctotal function with return type and with argument 
    { 
        total=eng+sci+math;
        return total;
    }
    public:
    void takedata()
    {
        cout<<"enter student roll no= ";          //taking input from user
        cin>>admno;
        cout<<"enter student name = ";
        cin>>sname;
        cout<<"enter marks of subjects English,Science and math = ";
        cin>>eng>>sci>>math;
        total=ctotal(eng,sci,math);           //invoking ctotal function
    }
    void showdata()
    {
        cout<<"\nname of student is = "<<sname;              //displaying all data members
        cout<<"\nroll no of student is = "<<admno;
        cout<<"\nmarks of subjects English = "<<eng<<" Science = "<<sci<<" Mathematics = "<<math;
        cout<<"\ntotal of subjects is = "<<total;
    }
};

main()
{
    student s;      //creating object of class
    s.takedata();
    s.showdata();
}
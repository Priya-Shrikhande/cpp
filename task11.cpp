#include<iostream>
using namespace std;
class REPORT         //creating class
{
    int admno;       //variables for admmission
    char name[20];
    float marks[5],average;
    float GETAVG()       //function for calculating average
    {
        float sum=0.0;
        for (int i=0; i<5; ++i)
        {
        sum =sum+marks[i];
        }
        average=sum/5;
        return average;
    }
    public:
    void READINFO()         //function for input information
    {
        cout<<"enter admission number of student :";
        cin>>admno;
        cout<<"enter name of student :";
        cin.ignore();
        cin.getline(name,20);
        cout<<"enter the marks of five subjects :";
        for (int i=0; i<5; i++) 
        {
          cin >> marks[i];
        }
        
        average=GETAVG();        //invoking function for calculating average
    }
    void DISPLAYINFO()       //function for display information 
    {
        cout<<"\nthe addmission number of student :"<<admno;
        cout<<"\nname of student is :"<<name;
        cout<<"\nmarks of five subjects are :";
        for (int i=0; i<5; ++i) 
        {
        cout << marks[i] << " ";
        }
        cout<<"\naverage of five subjects is :"<<average;
    }
};
main()
{
    REPORT r;        //creating class object
    r.READINFO() ;     //calling functions
    r.DISPLAYINFO();
}
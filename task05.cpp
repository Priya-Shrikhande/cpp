#include<iostream>
using namespace std;
class TEST
{
    int TestCode,NoCandidate,CenterReqd;    //variables for testcode of paper, number of candidate and center required for exam
    string Description;                    
    int CALCNTR(int)                // function for calculating centres required for exam
    {
      CenterReqd=(NoCandidate/100+1);  
      return CenterReqd;
    } 
    public:
    void SCHEDULE()                      //function for taking input
    {
        cout<<"enter the test code :";
        cin>>TestCode;
        cout<<"enter discription :";
        cin>>Description;
        cout<<"enter number of candidates appearing for exam :";
        cin>>NoCandidate;
        CenterReqd=CALCNTR(NoCandidate);
    }
    void DISPTEST()                           //function for display information
    {
        cout<<"\nthe test of exam is :"<<TestCode;
        cout<<"\nthe discription is :"<<Description;
        cout<<"\nnumber of candidates appearing for exam are :"<<NoCandidate;
        cout<<"\ncenter required for examination are :"<<CenterReqd;
    }
};

main()
{
    TEST t;                //creating object for class
    t.SCHEDULE();               //calling functions
    t.DISPTEST();
}
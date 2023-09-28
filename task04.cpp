#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs;     //batsman's code number ,no. of innings, notout and runs
    char bname[20];                      //batsman nam in array
    float batavg;                        //batsman's average in float
    float calcavg(int,int,int)         //calcavg function with return type and with argument 
    {
        batavg=runs/(innings-notout);      //batsman's average is calculated using formula
        return batavg;
    }
    public:
    void readdata()
    {
        menu :  cout<<"enter batsman's four digit code = ";   //taking input from user
               cin>>bcode;
        if(bcode>999 && bcode<10000)         //condition for four checking if code id 4 digit or not
        {

        }
        else
        {
            cout<<"INVALID CODE...enter only 4 digit number...\n";      
            goto menu;
        }
        cout<<"enter the name of batsman = ";
        cin>>bname;
        cout<<"enter innings,notout and runs = ";
        cin>>innings>>notout>>runs;
        batavg=calcavg(innings,notout,runs);      //invoking calcavg function
    }
    void displaydata()
    {
        cout<<"\ncode of batsman is : "<<bcode;          //displaying all data members
        cout<<"\nname of batsman is : "<<bname;
        cout<<"\ninnings :"<<innings<<" notout :"<<notout<<" runs :"<<runs;
        cout<<"\nbatsman's average is : "<<batavg;
    }
};
main()
{
    batsman b;           //creating object of class
    b.readdata();           //calling the functions    
    b.displaydata();
}
//design a class holiday with two data members initialize take with 0,1 
//and 2 argument using constructor
#include<iostream>
using namespace std;
class holiday
{
   string h1,h2;
   public:
     holiday()
     {
       h1="today is holiday";
     }
     holiday(string a)
     {
        h1=a;
        cout<<"\nholiday is on "<<h1;
     }
     holiday(string b,string c)
     {
        h1=b;
        h2=c;
        cout<<"\n holiday is on "<<h1;
        cout<<"\n holiday is on "<<h2;
     }
     
};
main()
{
    holiday h01("monday"),h02("sunday","friday");
}
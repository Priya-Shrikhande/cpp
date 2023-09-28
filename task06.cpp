#include<iostream>
using namespace std;
class FLIGHT                // creating class object
{ 
    int flight_number;         //variables for flight number,destination,distance for destination and fuel required
    string Destination;
    float Distance,fuel;
    void  CALFUEL()           // function for calculating fuel required
    {
       if(Distance<=1000)
       {
        fuel=500;
       }
       else if(Distance>1000 && Distance<=2000)
       {
        fuel=1100;
       }
       else if(Distance>2000)
       {
        fuel=2200;
       }
    }
    public:
    void FEEDINFO()         //function for taking flight details
    {
        cout<<"enter the flight number :";
        cin>>flight_number;
        cout<<"enter the destination :";
        cin>>Destination;
        cout<<"enter distance to your destination :";
        cin>>Distance;
        CALFUEL();                 // invoking function to calculate fuel
    }
    void SHOWINFO()             //function for displaying information
    {
        cout<<"\nthe flight number is :"<<flight_number;
        cout<<"\nthe flight destination is :"<<Destination;
        cout<<"\ndistance to destination is :"<<Distance;
        cout<<"\nfuel (in litres):"<<fuel;
    }
};

main()
{
    FLIGHT f;             //creating class object
    f.FEEDINFO();          //calling functions
    f.SHOWINFO();
}
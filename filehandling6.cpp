#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream ppp;
    ppp.open("pp.txt");
    
    ppp.close();
    ifstream rrr;
    char p[50];
    rrr.open("pp.txt");
    while(!rrr.eof())
    {
        rrr.getline(p,50);
        cout<<p<<endl;
    }
    rrr.close();
}
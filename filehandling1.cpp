//To write data into file using open function.
#include<iostream>
#include<fstream>
using namespace std;
main()
{
ofstream obj;
obj.open("demo1.txt");
obj<<"Welcome"<<endl<<"This is IT Networkz";
obj.close();
cout<<"file is created";
}
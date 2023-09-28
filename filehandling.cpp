//To write data into file using constructor
#include<iostream>
#include<fstream>
using namespace std;
 main()
{
ofstream obj("demo.txt");
obj<<"Hello"<<endl<<23<<endl;
cout<<"file is created";
}
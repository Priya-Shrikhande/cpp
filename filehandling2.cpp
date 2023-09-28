//A program to read a file.
#include<iostream>
#include<fstream>
using namespace std;
main()
{
char str[20];
int a;
ifstream obj("demo.txt");
obj>>str>>a;
cout<<str<<endl<<a;
}
//Read a file using getline function.
#include<iostream>
#include<fstream>
using namespace std;
main()
{
ofstream fout;
fout.open("country.txt");
fout<<"United states of america";
fout<<"\nIndia";
fout.close();
fout.open("capital.txt");
fout<<"Washington";
fout<<"\nlondon";
fout.close();
//Reading a file
const int n=88;//size of line
char line[n];
ifstream fin;
fin.open("country.txt");
cout<<"content of the file"<<endl;
while(!fin.eof())
{
fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
fin.open("capital.txt");
cout<<"\ncontent of file"<<endl;
while(!fin.eof())
{
fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
}
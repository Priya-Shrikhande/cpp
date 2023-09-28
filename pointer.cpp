//pointer example of call by value anf call by reference
#include<iostream>
using namespace std;
void doit(int num)
{
    num=num*2;
}
void doit1(int *num1)
{
    *num1=*num1*2;
}
main()
{
    int no=6;
    doit(no);
    cout<<"\n value of number= "<<no;
    doit1(&no);
    cout<<"\n value of number= "<<no;
}
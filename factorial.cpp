#include<iostream>
using namespace std;
int main()
{
    int num,fact=1,i;
    cout<<"enter the number=";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial is= "<<fact;
}
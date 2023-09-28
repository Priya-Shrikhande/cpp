//example of pointer with array
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,*p;
    p=arr;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"address of of array="<<(int)p<<"--value of array= "<<*p<<endl;
        p++;
    }
}
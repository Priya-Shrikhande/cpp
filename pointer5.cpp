//swapping using pointer
#include<iostream>
using namespace std;
void swap(int *,int *);
main()
{
  int x=4,y=6;
  cout<<"\nbefore swapping x= "<<x<<" y="<<y;
  swap(&x,&y);
  cout<<"\n x= "<<x;
  cout<<"\n y= "<<y;
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
   
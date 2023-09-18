#include<iostream>
using namespace std;
int facto(int);
main()
{
  int n,fact;
  cout<<"enter number=";
  cin>>n;
  fact=facto(n);
  cout<<"factorial is="<<fact;
}
int facto(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
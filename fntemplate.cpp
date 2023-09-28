#include<iostream>
using namespace std;
template <class p>
p mul(p a,p b)
{
    return a*b;
}
int main()
{
  int x=4,y=5,z;
  z=mul(x,y);
  cout<<"multiplication= "<<z<<endl;
}

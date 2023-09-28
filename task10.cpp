#include<iostream>
using namespace std;
class Sample
{
private:
 int x;
 double y;
public :
 Sample(); //Constructor 1
 Sample(int); //Constructor 2
 Sample(int, int); //Constructor 3
 Sample(int, double); //Constructor 4
};
Sample::Sample()
{
    int x=0;
    double y=0;
    cout<<"\n"<<x<<y;
}
Sample::Sample(int a)
{
    x=a;
    y=0;
    cout<<"\n"<<x<<y;
}
Sample::Sample(int m,int n)
{
    x=m;
    y=n;
    cout<<"\n"<<x<<y;
}
Sample::Sample(int i,double j)
{
    x=i;
    y=j;
    cout<<"\n"<<x<<y;
}
main()
{
    Sample sam,sam2(3),sam1(6,7),sam3(5,7.5);
}


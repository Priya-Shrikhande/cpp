#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,d,sum,rev;
    cout<<"enter 4 digit number="<<endl;
    cin>>num;
    a=num/1000;
    b=num/100%10;
    c=num/10%10;
    d=num%10;
    rev=d*1000+c*100+b*10+a*1;
    sum=a+d;
    cout<<"reverse of number is="<<rev<<endl;
    cout<<"sum of first and last digit of number is="<<sum;
}
#include<iostream>
using namespace std;
int c1=0,s1=0,rev=0,temp=0,c=0,r=0;
int main()
{
    int n;
    cout<<" enter 1 for even odd\n enter 2 for prime number\n enter 3 for armstrong number\n enter 4 for palindrome number="<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        int num1;
        cout<<"\n enter the number=";
        cin>>num1;
        if(num1%2==0)
        {
            cout<<"\n it is a even number";
        }
        else{
            cout<<"\n it is a odd number";
        }
        break;

        case 2:
        int num2,i;
        cout<<"\n enter the number=";
        cin>>num2;
        for(i=2;i<=num2;i++)
        {
            if(num2%i==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            cout<<"\nit is a prime number";
        }
        else
        {
            cout<<"\nit is not a prime number";
        }
        break;

        case 3:
        int num3;
        cout<<"\n enter the number=";
        cin>>num3;
        temp=num3;
        while(num3>0)
        {
        r=num3%10;
        s1=s1+r*r*r;
        num3=num3/10;
        }
        if(temp==s1)
        {
            cout<<"\nit is a armstrong number";
        }
        else
        {
            cout<<"\nit is not a armstrong number";
        }
        break;

        case 4:
        int num4,r1;
        cout<<"\n enter the number=";
        cin>>num4;
        temp=num4;
        while(num4!=0)
        {
            r1=num4%10;
            rev=rev*10+r1;
            num4=num4/10;
        }
        if(temp==rev)
        {
            cout<<"\nit is a palindrome number";
        }
        else
        {
            cout<<"\nit is not a palindrome number";
        }
        break;
        default:
        cout<<"invalid option";
    }
}
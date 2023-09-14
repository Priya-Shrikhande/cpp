#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,c;
    cout<<"enter the range for checking prime number=";
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
    {
        cout<<i<<endl;
    }
    }
    
    return 0;

}
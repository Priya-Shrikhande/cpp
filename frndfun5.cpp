#include<iostream>
using namespace std;
class decimal
{
   int n;
   public:
   decimal()
   {
    n=23;
   }
   friend void decimal_to_binary();
};
void decimal_to_binary()
{
    decimal d;
    int remainder,product,binary;
    while (d.n != 0) 
    {
       
    }
   cout<<"\ndecimal to binary number is :"<<binary;
}
main()
{
    decimal_to_binary();
}
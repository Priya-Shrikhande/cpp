 //example of friend function
 #include<iostream>
using namespace std;
class demo
{
    friend void msg();
};
void msg()
{
    cout<<"\n I am a friend function";
}
main()
{
    msg();
}
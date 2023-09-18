//wap where function is print and use it with different data type i.e function overloading
#include<iostream>
using namespace std;
int print(int);
float print(float);
char print(char);
main()
{
    int x;
    float y;
    char z;
    x=print(4);
    cout<<"here the integer is="<<x;
    y=print(3.4f);
    cout<<"\nhere the float is="<<y;
    z=print('s');
    cout<<"\nhere the character is="<<z;

}
int print(int i)
{
    return i;
}
float print(float j)
{
    return j;
}
char print(char k)
{
    return k;
}
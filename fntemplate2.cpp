 #include<iostream>
using namespace std;
template <class T>
void swap(T *a,T *b)
{
    *a=*a+*b;
    *a=*a-*b;
    *b=*a-*b;
}
int main()
{
    int x=8,y=9;
    cout<<"\nbefore swapping: "<<x<<" "<<y;
    swap(x,y);
    cout<<"\nswapped values are:"<<x<<" "<<y;
} 

/* #include<iostream>
using namespace std;
template <class T>
void swap(T& a,T& b)
{
    T c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int x=8,y=9;
    cout<<"\nbefore swapping: "<<x<<" "<<y;
    swap(x,y);
    cout<<"\nswapped values are:"<<x<<" "<<y;
}

 */
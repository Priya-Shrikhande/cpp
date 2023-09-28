//create class name rectangle and take 2 functions to calculate area of perimeter of rectangle
#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth,area,perimeter;
    public:
    void rec_area();
    void rec_perimeter();
};
void rectangle::rec_area()
{
    cout<<"enter length and breadth of rectangle= ";
    cin>>length>>breadth;
    area=length*breadth;
    cout<<"area of rectangle is= "<<area<<endl;
}
void rectangle::rec_perimeter()
{
    cout<<"enter length and breadth of rectangle= ";
    cin>>length>>breadth;
    perimeter=2*(length+breadth);
    cout<<"perimeter of rectangle= "<<perimeter;
}
int main()
{
    rectangle obj;
    obj.rec_area();
    obj.rec_perimeter();
}
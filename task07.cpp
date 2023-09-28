#include<iostream>
using namespace std;
class BOOK                        //creating class 
{
    int book_no;              //variables for book number ,booktitle, price of book
    char booktitle[20];
    float price;
    void TOTAL_COST(int num)       //function for calculating total cost of all copies
    {
        int total;
        total=price*num;
        cout<<"total cost paid by user is :"<<total;
    }
    public:
    void INPUT()           //function for input information
    {
       cout<<"enter book number which you want to purchase :";
       cin>>book_no;
       cout<<"enter the book title which you want to purchase :";
       cin.ignore();
       cin.getline(booktitle,20);
       cout<<"enter the price of book :";
       cin>>price;
    }
    void PURCHASE()      //function for displaying information
    {
        int n;          //n is for storing number of copies to be purchased
        cout<<"enter the number of copies you want to purchase :";
        cin>>n;
        TOTAL_COST(n);   // invoking function to calculate total cost of books
    }
};
main()
{
    BOOK b;        //creating object
    b.INPUT();      //calling functions
    b.PURCHASE();
}
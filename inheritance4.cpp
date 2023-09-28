#include<iostream>
using namespace std;
class number
{
  protected: 
  int n;
  public:int get()
  {
  cout<<"enter any number =";
  cin>>n;
  }
};
class square:public number
{
    protected:int sq;
    public:
    void sqr()
    {
      sq=n*n;
      cout<<"\n sqare of number = "<<sq;
    }
};
class cube:public square
{
   protected: int cube,y,z;
   public:
   void cub()
   {
      cube=sq*n;
      cout<<"\ncube= "<<cube;
   }
};
main()
{
    cube c;
    c.get();
    c.sqr();
    c.cub();
}
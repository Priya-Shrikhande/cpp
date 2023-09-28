//dynamic memory allocation example
#include<iostream> 
using namespace std; 
int main() 
{  
    int *ptr_i =new int(25);  
    float *ptr_f =new float(10.1234);  
    char *ptr_c =new char('a');  
    double *ptr_d =new double(1234.566);  
    cout<<"\n\n\n\nContents of the pointers "<<endl;  
    cout<<"Integer ="<<*ptr_i<<endl;  
    cout<<"Float ="<<*ptr_f<<endl;  
    cout<<"Char ="<<*ptr_c<<endl;  
    cout<<"Double ="<<*ptr_d<<endl; 
 
   delete ptr_i;  
   delete ptr_f;  
   delete ptr_d;  
   delete ptr_c; 
} 
#include<iostream>
using namespace std;
class Test
{
 char paper[20];
 int marks;
public:
 Test () // Function 1
 {
 void strcpy(paper, "Computer");
 marks = 0;
 }
 Test (char p[]) // Function 2
 {
 void strcpy(paper, p);
 marks = 0;
 }
 Test (int m) // Function 3
 {
 void strcpy(paper,"Computer");
 marks = m;
 }
 Test (char p[], int m) // Function 4
 {
 void strcpy (paper, p);
 marks = m;
 }
};
main()
{
    Test t1,t2("    "),t3(56),t4("tytu",67);
}
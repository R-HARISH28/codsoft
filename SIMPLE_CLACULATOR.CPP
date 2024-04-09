#include<iostream>
using namespace std;
class calculator
{

  public:
 float a;
 float b;
   void get( float c,float  d)
   {
    a=c;
    b=d;
    }
   void addition()
   {
     cout<<"The addition of "<<a<<"+"<<b<<"= "<<a+b<<endl;
    }
    void subtraction()
    {
     cout<<"The subtraction of "<<a<<"-"<<b<<"= "<<a-b<<endl;
    }
    void multiplication()
    {
     cout<<"The multiplication  of "<<a<<"*"<<b<<"= "<<a*b<<endl;
     }
     void division()
     {

      cout<<"The divison of "<<a<<"/"<<b <<"= "<<a/b<<endl;
      }
 };
 int main()
 {
     calculator op;
  float  m,n,o,c=1;
  cout<<"Welcome to simple caluclator"<<endl;
  while(c)
{
  cout<<"Enter  two numbers to do operation :"<<endl;
  cin>>m>>n;
  op.get(m,n);
  cout<<"Enter what operation you want to perform\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION "<<endl;
  cin>>o;
  switch((int)o)
  {
   case 1:
          op.addition();
          break;
   case 2:
           op.subtraction();
           break;
   case 3:
           op.multiplication();
           break;
   case 4:
           op.division();
           break;
   }
   cout<<"CONTINUE---1\nEXIT---0"<<endl;
   cin>>c;
}
    return 0;

  }
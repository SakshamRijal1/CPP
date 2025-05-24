#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a=1,b=12,c=1899;
  cout<<"The value of a without manipulating  is "<<a<<endl;
  cout<<"The value of b without manipulating is "<<b<<endl;
  cout<<"The value of c without manipulating is "<<c<<endl;

  cout<<"The value of a with manipulating  is "<<setw(10)<<a<<endl;
  cout<<"The value of b with manipulating  is "<<setw(10)<<b<<endl;
  cout<<"The value of c with manipulating  is "<<setw(5)<<c<<endl;


}
#include<iostream>
using namespace std;
int main()
{
  float a=45.45;
  int c=45;

  cout<<(int)a<<endl;
  cout<<int(a)<<endl;
  int b=int(a);//valid
  cout<<a+c<<endl;
  cout<<(int)a+c<<endl;
  cout<<int(a)+c<<endl;

  

}
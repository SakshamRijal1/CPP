#include<iostream>
using namespace std;
int main()
{
  int a=30,b=5;
  cout<<"Operators in cpp"<<endl;
  // Aritmetic operators
  cout<<"The value of a a+b is "<<a+b<<endl;
  cout<<"The value of a a-b is "<<a-b<<endl;
  cout<<"The value of a a*b is "<<a*b<<endl;
  cout<<"The value of a a/b is "<<a/b<<endl;
  cout<<"The value of a a%b is "<<a%b<<endl;
  // assignment operators
  /* =,+=,-=,/=,*=*/
   

//comparison operators
  cout<<"The value of a==b "<<(a==b) <<endl;//0
  cout<<"The value of a<=b "<<(a<=b) <<endl;//0
  cout<<"The value of a>=b "<<(a>=b) <<endl;//1
  cout<<"The value of a<b "<<(a<b)<<endl;//0
  cout<<"The value of a>b "<<(a>b) <<endl;//1
  cout<<"The value of a!=b "<<(a!=b) <<endl;//1

  //logical operators
  cout<<((a>=b)&&(a==b));
  cout<<((a>=b)||(a==b));
  cout<<(!(a==b));


  return 0;
}
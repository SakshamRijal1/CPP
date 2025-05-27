#include<iostream>
using namespace std;
inline int product (int a,int b)
{
  return a*b;//inline apply for the small code 
}
int main()
{
  int x=4,y=5;
 
  cout<< product(x,y)<<endl;//same output what does it do????
  /* it reduces the function jump time the code or value of the function directly copies here make 4*5 here not in function*/



}
#include<iostream>
using namespace std;
int sum=90;//initialize global variable
int main()
{
  int a,b,sum;
  cout<<"Enter the value of a:"<<endl;
  cin>>a;
  cout<<"Enter the value of b:"<<endl;
  cin>>b;
  sum=a+b;//local variable;
  cout<<sum<<endl;//local variavle print 
  cout<<::sum<<endl;//::(scope resultion operater ,global value)
return 0; 
}
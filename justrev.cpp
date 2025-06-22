//CONSTRUCTOR;
#include<iostream>
using namespace std;
class A{
  
public:

A(int x)
{
  cout<<"I am from normal constrtor"<<x<<endl;
}
A(initializer_list<int> lst)
{
  cout<<"i am from pro constructor"<<endl;
  for(int x:lst)
  {
    cout<<x<<endl;
  }
}
};
int main(){
    A a1{100,4897,394};
    return 0;
}
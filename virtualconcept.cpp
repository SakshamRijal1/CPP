// virtual function-->Member function which is expected to be redefined ina derived class

#include<iostream>
using namespace std;
class A{
public:
  virtual void saksham()
  {
    cout<<"ITS ME FROM  PARENT";
    }
};
class B:public A{
  void saksham()override
  {
    cout<<"ITS ME FROM  child";
    }
};
int main(){
  B b;
  b.saksham();
    
    return 0;}
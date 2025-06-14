#include<iostream>
using namespace std;
class Shape{
  public:
  virtual void shape()=0;
};
class Circle:public Shape{
  void shape()
  {
    cout<<"Drawing a circle"
  }
}
int main(){
  Circle c1;
  c1.shape();
    
    return 0;
}
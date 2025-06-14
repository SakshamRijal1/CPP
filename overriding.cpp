///function overriding ==>Inheritance
#include<iostream>
using namespace std;
class Parent{
  public:
  virtual void saksahm(){
    cout<<"Hey its from Parent";
  }
};
class Class:public Parent{
  public:
  void saksahm() override{
    cout<<"Hey its from Class";
  }
};
int main(){
Parent *p1;
Class c1;
p1=&c1;
p1->saksahm();//parent class is said to be overriden
    
    return 0;
}
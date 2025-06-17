#include<iostream>
using namespace std;
class Base{
  public:
  Base()
  {
    cout<<"Consturctor of base"<<endl;
  }
  ~Base()
  {
    cout<<"Desturctor of base"<<endl;
  }
};
class Derived:public Base{
  public:
   Derived()
  {
    cout<<"Consturctor of D"<<endl;
  }
  ~Derived()
  {
    cout<<"Desturctor of D"<<endl;
  }
};
int main(){
    Derived d1;
    return 0;
}
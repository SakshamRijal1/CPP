//passsing object as a argument
#include<iostream>
using namespace std;
class Complex
{
  int a;
  int b;
  public:
  void setData(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void print(){
    cout<<"Complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
  void add(Complex obj1,Complex obj2)
  {
     a=obj1.a+ obj2.a;
     b= obj1.b +obj2.b;  
  }
};
int main(){
    Complex c1;
    Complex c2;
    c1.setData(10,9);
    c1.print();
    c2.setData(18,17);
    c2.print();
  Complex c3;
  c3.add(c1,c2);
  c3.print();
    return 0;
}
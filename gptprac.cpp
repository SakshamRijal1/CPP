#include<iostream>
using namespace std;
class complex{
  public:
  int a;
  int b;
  void setData(int v1,int v2)
  {
    a=v1;
    b=v2;

  }
  void setBySum(complex &o1,complex &o2)
  { a=o1.a+o2.a;
    b=o1.b+o2.b;
    o1.a=10;
    o1.b=20;
  }
  void printNumber(){
    cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;

  }
};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.setBySum(c1,c2);
    c3.printNumber();
    c1.printNumber();
 
    return 0;
}
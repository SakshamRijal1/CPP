#include<iostream>
using namespace std;
class A{
  int a;
  int b;
  public:
  void takeData(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  friend A sumData(A obj1,A obj2);
  void printData()
  {
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
};
A sumData(A obj1,A obj2)
{
  A a3;
  a3.takeData((obj1.a+obj2.a),(obj1.b+obj2.b));
  return a3;
}
int main(){
    A a1,a2,sum;
    a1.takeData(1,2);
    a1.printData();

    a2.takeData(3,4);
    a2.printData();
   sum=sumData(a1,a2);
   sum.printData();
    return 0;
}
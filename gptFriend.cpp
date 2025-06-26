#include<iostream>
using namespace std;
class B;
class A{
  int a;
   public:
   friend int showSum(A obj1,B obj2);
   void setData(int a)
   {
  this->a=a;
   }};
class B{
  int b;
  public:
  void setData(int b)
   {
  this->b=b;}
 friend int showSum(A obj1,B ob2);
};
int showSum(A obj1,B ob2){
  return obj1.a+ob2.b;
}

int main(){
    A a1;
    B b1;
    a1.setData(19);
  b1.setData(16);
  cout<<"SUm is "<<showSum(a1,b1)<<endl;

    return 0;
}
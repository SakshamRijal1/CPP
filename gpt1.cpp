#include<iostream>
using namespace std;
class B;
class A{
  int a;
  friend int sum(A a1,B b1);
  public:
  void setData(int a)
  {
this->a=a;
  }

};
class B{
int b;
public:
  friend int sum(A a1,B b1);//can decleare inside public or private
   void setData(int b)
  {
this->b=b;
  }

};
int sum(A a1,B b1){
  return a1.a+b1.b;
}


int main(){
    A a1;
    B b1;
    a1.setData(100);
    b1.setData(90);
    cout<<"The sum is "<<sum(a1,b1)<<endl;
    return 0;
}
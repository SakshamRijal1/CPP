#include<iostream>
using namespace std;
class B;
class A{
  int x;
  public:
  A(int x):x(x) {}
  friend int add(A a1,B b1);

};
class B{
  int y;
  public:
  B(int y):y(y) {}
  friend int add(A a1,B b1);
};
int add(A a1,B b1)
{
 return a1.x+b1.y;
}

int main(){
    A a1(1);
   
    B b1(2);
  
    cout<<add(a1,b1);
    return 0;
}
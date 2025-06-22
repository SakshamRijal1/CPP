#include<iostream>
using namespace std;
class A{
  public:
  int x;
 void setData(int v)
  {
   x=v;
  }
void changeData(A &obj)
{
  obj.x=10000;
}

void display()
{
  cout<<x<<endl;
}
};
int main(){
    A a1;
    a1.setData(3);
    a1.display();
    A a2;
    a2.changeData(a1);
    a1.display();

    return 0;
}
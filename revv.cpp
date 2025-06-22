#include<iostream>
using namespace std;
class Add{
  public:
  int a;
  int b;
  void setData(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void display()
  {
    cout<<"The complex number is"<<a<<"+"<<b<<"i"<<endl;
  }
  void sum(Add obj,Add obj1)
  {
    obj1.a*=2;
    obj1.b*=2;
  }

};
int main(){
 Add a1 ;
 a1.setData(3,4);
   a1.display();

   Add a2;
   a2.setData(8,9);
   a2.display();

   Add a3;
   a3.sum(a1,a2);
   
   a2.display();

    return 0;
}
#include<iostream>
using namespace std;
class Sum{
  public:
  int a;
  int b;
  void setData(int a,int b)
  {
this->a=a;
this->b=b;
  }
  void doubleData(Sum obj)
  {
    obj.a*=2;
    obj.b*=2;

  }
   void doubleDatar(Sum &obj)
  {
    obj.a*=2;
    obj.b*=2;
  }
  int add()
  {
    return a+b;
  }
};
int main(){
    Sum s1;
    s1.setData(2,3);
   cout<< s1.add()<<endl;
    s1.doubleData(s1);
    cout<<s1.add()<<endl;
     s1.doubleDatar(s1);
     cout<<s1.add()<<endl;
     

    return 0;
}
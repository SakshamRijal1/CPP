//staticobject==>available throughout the program

#include<iostream>
using namespace std;

class A{
  public:
  A()
  {
    cout<<"Constructor"<<endl;
  }
   ~A()
  {
    cout<<"Destructor"<<endl;
  }
};
int main(){
  if(true)
  {
   static A a1;//object available throught the program
  }
  cout<<"HEHEH ITS JUTS NOTHING END";
    return 0;
}
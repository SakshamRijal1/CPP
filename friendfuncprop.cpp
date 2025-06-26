//friend-- function-->oops
#include<iostream>
using namespace std;
class Student{
  int x;
  public:
  void setData(int x)
  {
this->x=x;
  }
  void show();
  
};
void show()
{
  cout<<x<<endl;
}
int main(){
    Student s1;
    s1.setData(9965);
    s1.show();
   
    return 0;
}
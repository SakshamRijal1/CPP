#include<iostream>
using namespace std;
class Student{
  public:
  virtual void saksham()
  {
    cout<<"Student"<<endl;
  }

};
class teacher:public Student{
  public:
  void saksham()override
  {
    cout<<"Teacher"<<endl;
  }
};
int main(){
  Student *p1;
  teacher t1;
  p1=&t1;
  p1->saksham();
    return 0;
}
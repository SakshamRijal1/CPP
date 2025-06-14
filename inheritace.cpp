#include<iostream>
using namespace std;
class Teacher{
  private:
  double sal;
  public:
  Teacher(double sal)
  {this->sal=sal;
  }
  friend void show(Teacher obj);
};
void show(Teacher obj)
{
  cout<<obj.sal<<endl;
}

int main(){
  Teacher t1(1387458);
  show(t1);
    
    return 0;
}
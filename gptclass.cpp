#include<iostream>
#include<string>
using namespace std;
class Student{
  private:
  int roll;
  string name;
  public:
  void setData(int r,string n)
  {
      roll=r;
name=n;
    
  }
  void getData(){
      cout<<"The name is"<<name<<endl;
  cout<<"The roll is"<<roll<<endl;
  }

};
int main(){
  Student Saksham;
  Saksham.setData(45,"Saksham");
  Saksham.getData();
    
    return 0;
}
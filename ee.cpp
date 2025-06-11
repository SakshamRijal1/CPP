#include<iostream>
using namespace std;
class Employee{
  public:
  Employee()
  {
    cout<<"I am constructer of Employee"<<endl;
  }
};
class Student:public Employee{
  public:
  Student(){
  cout<<"I am constructer of student"<<endl;}
};

int main(){
    Student s1;
    return 0;
}
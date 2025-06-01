#include<iostream>
using namespace std;
class Teacher{
  private:
  double salary;
  public:
  void setSalary(int s);
  double getSalary();
};
 void Teacher:: setSalary(int s){
  salary=s;
 }
 double Teacher::getSalary(){
  return salary;
 }


int main(){
  Teacher t1;
  t1.setSalary(500);
  cout<<t1.getSalary()<<endl;
    
    return 0;
}
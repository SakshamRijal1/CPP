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
cout<<salary<<endl;
 }


int main(){
  Teacher t1;
  t1.setSalary(500);
t1.getSalary();
    
    return 0;
}
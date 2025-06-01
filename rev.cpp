#include<iostream>
#include<string>

using namespace std;
class Teacher{
  string name;
  string depart;
  double* salaryPtr;
  public:
  Teacher(string name,double salary)
  {
    cout<<"I am constructor but parameterized"<<endl;
    this->name=name;
    salaryPtr=new double;
    *salaryPtr=salary;
  }
  Teacher(Teacher &realObj){
    cout<<"This is copy constructor"<<endl;
   this->name=realObj.name;
   this->salaryPtr=realObj.salaryPtr; 
  }
 void getInfo()
 {
  cout<<"Name = "<<name<<endl;
  cout<<"Salary= "<<*salaryPtr<<endl;
 }
//
};
int main(){
  Teacher t1("Saksham",13444.78);
  Teacher t2(t1);//custom copy constructor -invoked
  
  t2.getInfo();
    return 0;
}
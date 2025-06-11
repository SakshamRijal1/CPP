#include<iostream>
#include<string>
using namespace std;
class Student{
  public:
  string name;
  int *agePtr;
  Student(string name,int age){
    this->name=name;
    agePtr=new int;
    *agePtr=age;
  }
  Student(Student &real)
  {
    this->name=real.name;
    agePtr=new int;
    *agePtr=*real.agePtr;
  }
  void getInfo()
  {
    cout<<"Name is "<<name<<endl;
    cout<<"Age is "<<*agePtr<<endl;
  }

};


int main(){
  Student s1("Saksham",18);
  Student s2(s1);
  s1.getInfo();
  *(s2.agePtr)=10;
  s1.getInfo();
    
    return 0;
}
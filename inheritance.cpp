#include<iostream>
#include<string>
using namespace std;
class Person{
  public:
  string name;
  int age;
  Person(string name,int age)
  {
    this->name=name;
    this->age=age;
  }

};
class Student : public Person{
  public:
  int roll;
  Student(string name,int age,int roll):Person(name,age){
    this->roll=roll;
  }
  void getInfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<roll<<endl;
  }
};

int main(){
  Student s1("Saksham",146,4389);
  s1.getInfo();
    return 0;
}
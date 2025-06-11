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
class Student:public Person{
   public:
   int roll;
  Student(string name,int age,int roll):Person(name,age)
  {
    this->roll=roll;
  }
void getInfo(){
  cout<<name<<age<<roll;
}

};
int main(){
  Student s1("Saksham",12,78);
  s1.getInfo();

    return 0;
}
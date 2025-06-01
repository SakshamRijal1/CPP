#include <iostream>
#include <string>

using namespace std;
class Student
{
public:
  string name;
  string address;
  int *rollPtr;
  Student()
  {
    cout << "Hey i am non parameterized constructor" << endl;
  }
  Student(string name, int roll)
  {
    (*this).name = name;
    rollPtr = new int;
    *rollPtr = roll;
  }
  Student(Student &objReal)
  {
    this->name = objReal.name;
    rollPtr = new int;
    *rollPtr = *objReal.rollPtr;
  }
  void getInfo()
  {
    cout << "Name is = " << name << endl;
    cout << "Roll is = " << *rollPtr << endl;
  }
};

int main()
{
  Student s1("Saksham", 12);
  Student s2(s1); // default copy sonstructor
  s1.getInfo();
  *(s2.rollPtr) = 14;
  s1.getInfo();

  return 0;
}
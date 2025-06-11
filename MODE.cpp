#include <iostream>
using namespace std;

class Person {
    protected:
    int age;
public:
    // Constructor that accepts age
    Person(int age) {
      this->age = age;
    }
};

class Student : public Person {
  public:
    // Student constructor calls Person constructor with age
    Student(int age) : Person(age) {
      cout << "Student age: " << age << endl;
    }
};

int main() {
  Person p1(30);      // Must provide age, no default constructor now
  Student s1(20);     // Pass age to Student constructor
    
  return 0;
}

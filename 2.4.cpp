#include<iostream>
using namespace std;

class Student {
    int age;
    int sal;

public:
    Student(int a = 0, int s = 0) {  // Constructor
        age = a;
        sal = s;
    }

    void showSecret(Student &obj) {
        this->age = obj.age;
        this->sal = obj.sal;
    }

    void getInfo() {
        cout << "Age: " << age << ", Salary: " << sal << endl;
    }
};

int main() {
    Student s1(12, 67000);
    Student s2;

    s2.showSecret(s1);  // s2 copies s1's data
    s2.getInfo();       // prints: Age: 12, Salary: 67000

    return 0;
}

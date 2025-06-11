#include<iostream>
using namespace std;

class Saksham {
public:
    static int age;  // Static member variable

    void age_() {
        age++;  // Increment static age
        cout << "Age: " << age << endl;
    }
};

// Initialize static variable outside the class
int Saksham::age = 17;  // So first call becomes 18

int main() {
    Saksham s1, s2;

    s1.age_();  // Age: 18
    s1.age_();  // Age: 19
    s2.age_();  // Age: 20
    s1.age_();  // Age: 21
    s2.age_();  // Age: 22

    return 0;
}

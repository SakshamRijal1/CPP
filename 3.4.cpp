//5)5.WAP as your choice to use this pointer to return an object of class from a member function of class.
//4)WAP to illustrate static member function.
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static variable shared by all objects

public:
    // Static member function to access static variable
    static void showCount() {
        cout << "Count = " << count << endl;
    }

    void increment() {
        count++;
    }
};

// Initialize static member variable outside class
int Counter::count = 0;

int main() {
    Counter c1, c2;

    c1.increment();
    c2.increment();

    // Call static member function without creating object (using class name)
    Counter::showCount();  // Output: Count = 2

    return 0;
}

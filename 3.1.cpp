//1.WAP to add and swap private data of two different classes. Use separate function for add and swap.
#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int data;
public:
    A(int val) : data(val) {}
    friend void add(A, B);
    friend void swapData(A&, B&);
    void display() { cout << "A's data: " << data << endl; }
};

class B {
private:
    int data;
public:
    B(int val) : data(val) {}
    friend void add(A, B);
    friend void swapData(A&, B&);
    void display() { cout << "B's data: " << data << endl; }
};

// Function to add data of A and B
void add(A a, B b) {
    cout << "Sum = " << (a.data + b.data) << endl;
}

// Function to swap data of A and B
void swapData(A &a, B &b) {
    int temp = a.data;
    a.data = b.data;
    b.data = temp;
}

int main() {
    A objA(10);
    B objB(20);

    cout << "Before Swap:" << endl;
    objA.display();
    objB.display();

    add(objA, objB);

    swapData(objA, objB);

    cout << "\nAfter Swap:" << endl;
    objA.display();
    objB.display();

    return 0;
}

#include <iostream>
using namespace std;

class ClassA {
private:
    int secret;

public:
    ClassA(int val) : secret(val) {}

    // Declare ClassB as a friend class, so it can access private members of ClassA
    friend class ClassB;
};

class ClassB {
public:
    void showSecret(ClassA &a) {
        // Accessing private member 'secret' of ClassA because ClassB is a friend
        cout << "Secret value from ClassA is: " << a.secret << endl;
    }
};

int main() {
    ClassA objA(42);
    ClassB objB;

    objB.showSecret(objA);  // ClassB function uses ClassA's private data

    return 0;
}

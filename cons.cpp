#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    a += b++ * --a / ++b - a--;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

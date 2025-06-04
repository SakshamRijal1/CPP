#include <iostream>
using namespace std;

class Distance {
private:
    int meter;
    int centimeter;

public:
    void read() {
        cout << "Enter meter and centimeter: ";
        cin >> meter >> centimeter;
    }

    void display() {
        cout << "Meters: " << meter << ", Centimeters: " << centimeter << endl;
    }

    friend Distance addDistance(Distance d1, Distance d2);
};


Distance addDistance(Distance d1, Distance d2) {
    Distance result;
    result.centimeter = d1.centimeter + d2.centimeter;
    result.meter = d1.meter + d2.meter;

    if (result.centimeter >= 100) {
        result.meter += result.centimeter / 100;
        result.centimeter = result.centimeter % 100;
    }

    return result;
}

int main() {
    Distance d1, d2, d3;
    d1.read();
    d2.read();
    d3 = addDistance(d1, d2);
    cout << "Sum of distances: ";
    d3.display();

    return 0;
}

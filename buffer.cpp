#include <iostream>
#include<manip>
using namespace std;
int main() {
    int a;
    long int b;
    char c;
    float e;
    double f;
    cin>>a>>b>>c>>e>>f;
    
    cout<<a<<endl;
    
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3);
    cout<<e<<endl;
    cout<<fixed<<setprecision(9);
    cout<<f<<endl;
    return 0;
}
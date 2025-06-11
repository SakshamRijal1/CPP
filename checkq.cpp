#include<iostream>
#include<string>
using namespace std;
class Name{
    public:
    string name="Saksham";
    string anotherName=name;
    name()
    {
        cout<<anotherName<<endl;
    }
};
int main(){
    Name n1;
    return 0;
}
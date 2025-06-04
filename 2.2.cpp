#include<iostream>
#include<string>
using namespace std;
class Verify{
  public:
  string name;
  Verify()
  {
    cout<<"Hey i am construtor"<<endl;
  }
  ~Verify()
  {
    cout<<"Hey i am destructor"<<endl;
  }
};
int main(){
  Verify v1;
  v1.name="saksham";
cout<<"We print "<<v1.name<<"before destructor"<<endl; 
    return 0;
}
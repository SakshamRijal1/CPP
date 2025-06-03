#include<iostream>
using namespace std;
class Box{
  private:
  double length;
  double breadth;
  double height;
  public:
  Box()
  {
    length=10;
    breadth=20;
    height=10;
  }
  void getInfo()
  {
    cout<<"The volume of a box is"<<length*breadth*height<<endl;
  }


};
int main(){
  Box b1;
  b1.getInfo();


    
    return 0;
}
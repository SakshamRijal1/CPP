#include<iostream>
using namespace std;
class Rectangle{
  public:
  int length;
  int width;
  void setData(int l,int w)
  {
  length=l;
  width=w;
  }
  int calculateArea()
  {
return length*width;
  }
  void doubleSizeByValue(Rectangle r)
  {
    r.length*=2;
    r.width*=2;
  }
  void doubleSizeByRefrence(Rectangle & r)
  {
     r.length*=2;
     r.width*=2;
  }

};
int main(){
    Rectangle r1;
    r1.setData(10,20);
   cout<< r1.calculateArea()<<endl;
    r1.doubleSizeByValue(r1);
   cout<< r1.calculateArea()<<endl;//
    r1.doubleSizeByRefrence(r1);
    cout<< r1.calculateArea()<<endl;//800
    return 0;
}
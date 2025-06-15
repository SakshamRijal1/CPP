//abstration==>Hiding uneccesary or sensitive detials and showing only important
//abstration is used to define the interface of derived classes
//they cannot be instantiated(objet cannot created)but meant to be inheritaedb
#include<iostream>
using namespace std;
class Shape{
  public:
  virtual void Draw()=0;

};
class Circle:public Shape{
  public:
  void Draw()override{
    cout<<"Drawing a circle"<<endl;
  }
};
class Rectangle:public Shape{
  public:
  void Draw()override{
    cout<<"Drawing a rectangle"<<endl;
  }
};
class Triangle:public Shape{
  public:
  void Draw()override{
    cout<<"Drawing a Triangle"<<endl;
  }
};
int main(){
  Shape *s1;
  Circle c1;
  Triangle t1;
  Rectangle r1;
  s1=&c1;
  s1->Draw();
  s1=&r1;
  s1->Draw();
  s1=&t1;
  s1->Draw();

    
    return 0;
}
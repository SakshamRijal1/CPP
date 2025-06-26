#include<iostream>
#include<cmath>
using namespace std;
class Point{
  int x;
  int y;
  public:
  void setData(int x,int y)
  {
    this->x=x;
    this->y=y;
  }
  friend void  distance(Point p1,Point p2);
};
void distance(Point p1,Point p2)
{
  cout<<"Distance ="<<sqrt(pow((p2.x-p1.x),2) +pow((p2.y-p1.y),2))<<endl;
}
int main(){
    Point p1;
    Point p2;
    Point p3;
    p1.setData(2,3);
    p2.setData(4,5);
    distance(p1,p2);
    return 0;
}
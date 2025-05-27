#include<iostream>
#include<cmath>
using namespace std;

class Square
{
  public:
    double side;

    double area(double side)
    {
      cout << "Area of square: " << pow(side, 2) << endl;
    }
};

class Rectangle
{
  public:
    double length;
    double breadth;

    double area(double length, double breadth)
    {
      cout << "Area of rectangle: " << length*breadth << endl;
    }
};

class Triangle
{
  public:
    double height;
    double base;

    double area(double height, double base)
    {
      cout << "Area of triangle: " << 0.5*height*base << endl;
    }
};

int main()
{
  Square square;
  Rectangle rectangle;
  Triangle triangle;

  // double side;
  // double length, breadth;
  // double height, base;

  cout << "Side of square: ";
  cin >> square.side;

  cout << "Length and breadth of rectangle: ";
  cin >> rectangle.length >> rectangle.breadth;

  cout << "Height and base of triangle: ";
  cin >> triangle.height >> triangle.base;

  square.area(square.side);
  rectangle.area(rectangle.length, rectangle.breadth);
  triangle.area(triangle.height, triangle.base);

  return 0;


}
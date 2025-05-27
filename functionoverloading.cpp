//WAP TO FIND THE AREA OF A SQUARE ,RECTANGLE AND TRIANGLE USING FUNCTION OVERLOADING WITHOUT USING CLASS
#include<iostream>
#include<cmath>
using namespace std;
float area(float l){
  return l*l;

}
float area(float l,float b){
  return l*b;
}
float area(float a,float b ,float c)
{
  float s;
  s=(a+b+c)/2;
   return sqrt(s*(s-a)*(s-b)*(s-c));

}
int main()
{
  int side_ofsquare;
  int legth_ofrect;
  int breadth_ofrect;
  int a,b,c;
  cout<<"Enter length of a square:"<<endl;
  cin>>side_ofsquare;
  cout<<"Enter length and breadth of a rectangle"<<endl;
  cin>>legth_ofrect>>breadth_ofrect;
  cout<<"Enter the sides of a trangle:"<<endl;
  cin>>a>>b>>c;
  cout<<"The area of square is:"<<area(side_ofsquare)<<endl;
  cout<<"The area of rectangle is:"<<area(legth_ofrect,breadth_ofrect)<<endl;
  cout<<"The area of triangle is:"<<area(a,b,c)<<endl;



}
#include<iostream>
#define PI 3.14
#define area PI*radius*radius// area of circle using preprocesser directives
using namespace std;
int main()
{
  float radius;
  cout<<"Enter a radius of cirle"<<endl;
  cin>>radius;
  cout<<"Area is "<<area<<endl;//here we print the area of circle using preprocessor directives
  return 0;
}

#include<iostream>
using namespace std;
float findarea(float l,float b)
{
  return l*b;
}
float findarea(float l)
{
  return l*l;
}
float findarea(float l,int x)
{
  return l*l*x;
}
int main(){
    float l_r,b_r,l_s,l_c;
    cout<<"Enter length and bredth of rectangle"<<endl;
    cin>>l_r>>b_r;
     cout<<"Enter length square"<<endl;
    cin>>l_s;
      cout<<"Enter length cube"<<endl;
    cin>>l_c;
    cout<<"The area of rectangle"<<findarea(l_r,b_r)<<endl;
    cout<<"The area of square"<<findarea(l_s)<<endl;
    cout<<"The area of cube"<<findarea(l_c,6)<<endl;
    return 0;
}
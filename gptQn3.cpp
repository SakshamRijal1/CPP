#include<iostream>
using namespace std;
class Complex{
  int real ;
  int imaginary;
  public:
  friend Complex add(Complex c1,Complex c2);
  void setData(int real,int imaginary)
  {
this->imaginary=imaginary;
this->real=real;
  }
  void print()
  {
    cout<<"Complex is"<<real<<" + "<<imaginary<<"i"<<endl;
  }

};
Complex add(Complex c1,Complex c2)
{
  Complex c3;
  c3.setData((c1.real+c2.real),(c1.imaginary+c2.imaginary));
  return c3;
 
}
int main(){
    Complex c1;
    Complex c2;
    Complex sum;
    c1.setData(10,11);
    c2.setData(11,10);
    sum=add( c1,c2);
    sum.print();
    

    return 0;
}
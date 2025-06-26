#include<iostream>
using namespace std;
class Number{
  int value;
  public:
void setData(int a)
{
  value=a;
}
friend int add (Number o1,Number o2);

};
int add(Number  )
{
return o1.value+o2.value;
}
int main(){
    Number n1;
    Number n2;
    n1.setData(1);
    n2.setData(2);
cout<<"Sum="<<add(n1,n2);

    return 0;
}
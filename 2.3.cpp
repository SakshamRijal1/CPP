#include<iostream>
#include<string>
using namespace std;
class Employee{
  public:
string name;
string add;
int age;
double sal;
void setData()
{
  cout<<"Enter name,address,age,salary"<<endl;
  cin>>name>>add>>age>>sal;
}
void getInfo()
{
  cout<<name<<add<<age<<sal<<endl;
}
};

int main(){
  int i;
  Employee e[10];
  for(i=0;i<10;i++)
  {
   e[i].setData();
   e[i].getInfo();
  }
    
    return 0;
}
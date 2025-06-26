#include<iostream>
#include<iomanip>
using namespace std;
class Teacher{
  double sal;
  public:
  void setData(double sal);

friend void secretData(Teacher obj);
};
void Teacher::setData(double sal)
{
this->sal=sal;
}
void secretData(Teacher obj)
{
  cout<<fixed<<setprecision(2);
  cout<<"Salary of this teacher is"<<obj.sal<<endl;
}
int main(){
    Teacher t1;
    t1.setData(45000.35);
    secretData(t1);
    return 0;
}
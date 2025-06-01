#include<iostream>
#include<string>
using namespace std;
class Student{
  public:
  
  string name;
  double* gpaPtr;
  public:
  Student(string name,double cgpa){
    this->name=name;
    gpaPtr=new double;
    *gpaPtr=cgpa;
  }
  Student(Student &obj)
  {
 this->name=obj.name;
 this->gpaPtr=obj.gpaPtr;
  }
  void getInfo()
  {
    cout<<name<<endl;
    cout<<*gpaPtr<<endl;
  }

};
int main(){
    Student s1("Saksham",3.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.gpaPtr)=4.0;
    s1.getInfo();
    return 0;
}
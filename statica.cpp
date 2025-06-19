#include<iostream>
using namespace std;
class student{
  public:
  int rollNo;
 static  int stdCount;
  student()
  {
    stdCount++;
    rollNo=stdCount;
  }
  void display()
  {
    cout<<"ROll number"<<rollNo<<endl;
    cout<<stdCount;
  }
};
int student::stdCount=0;

int main(){
    student s1;
student s2;
s1.display();
    return 0;
}
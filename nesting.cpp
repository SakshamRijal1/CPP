#include<iostream>
#include<string>
using namespace std;
class Student{
  public:
  string name;
  int marks;
  void input();
  void grade();
};
void Student::input()
{
  cout<<"Enter your name"<<endl;
   cin.ignore();
  getline(cin,name);
  cout<<name<<",Enter your marks"<<endl;
  cin>>marks;
}
void Student::grade()
{
  input();
  if(marks>=90 && marks<=100)
  {
    cout<<name<<",You got A+ Grade"<<endl;
  }
  else if(marks>=80 && marks<90)
  {
    cout<<name<<",You got A Grade"<<endl;
  }
  else if(marks>=70 && marks<80)
  {
    cout<<name<<",You got B+ Grade"<<endl;
  }
 else  if(marks>=60&& marks<70)
  {
    cout<<name<<",You got B Grade"<<endl;
  }
  else if(marks>=50 && marks<60)
  {
    cout<<name<<",You got C+ Grade"<<endl;
  }
   else if(marks>=40 && marks<50)
  {
    cout<<name<<",You got C Grade"<<endl;
  }
  else if(marks>=35 && marks<40)
  {
    cout<<name<<",You got D Grade"<<endl;
  }
  else if(marks<35 &&marks>=0)
  {
    cout<<name<<",You got NG Grade"<<endl;
  }
  else{
    cout<<"Invalid marks"<<endl;
  }


}
int main(){
   Student s1;
   s1.grade(); 
    return 0;
}
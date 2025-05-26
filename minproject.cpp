#include "saksham.h"
using namespace std;
bool stu=true;
int main()
{
  string name;
  float marks;
  int age;
  char verification;
  char platform='Y';
  while(platform=='Y'||platform=='y'){
  cout<<"------------------WELCOME TO THE SAKSHAM RIJAL PLATFORM DASHBOARD----------------"<<endl;
  cout<<"Enter your name:"<<endl;
  getline(cin,name);
  string &refrencename=name;
  cout<<"Enter your marks :"<<endl;
  cin>>marks;
  cout<<name<<",Please enter your age"<<endl;
  cin>>age;
  cout<<"Do you want to see your profile(Enter 'Y' if yes or press other keyword if no))"<<endl;
  cin>>verification;
  if(verification=='Y'|| verification=='y'){
  cout<<"-------------------WELCOME TO STUDENT INFO SECTION-------------------------"<<endl;
  cout<<"Your name is: "<<refrencename<<endl;
  cout<<name<<",Your age is :"<<age<<endl;
  cout<<name<<",Your marks is :"<<marks<<endl;
  cout<<"Is this a student??"<<(stu?"Yes":"No")<<endl;
  cout<<"Want to go the platform dashboard?(Enter 'Y' if yes or press other keyword if no)"<<endl;
  cin>>platform;
  }
else {
  cout<<"Thanks"<<endl;
  break;
}}  
}
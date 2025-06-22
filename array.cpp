#include<iostream>
#include<string>
using namespace std;
class Student{
string name;
int marks[5];
int i;
float sum=0;
float avg;
public:
void input()
{
  

  cout<<"Enter name"<<endl;
 cin.ignore();
  getline(cin,name);
  cout<<"Enter your marks in 5 subjects"<<endl;
  for(i=0;i<5;i++)
  {
    cin>>marks[i];
  }


}
void display(){
cout<<"---------------REPORT CARD DASHBOARD------------------"<<endl;
  cout<<"Name: "<<name<<endl;
   cout<<"Marks: "<<endl;
  for(i=0;i<5;i++)
  {
  cout<<marks[i]<<endl;
}

}
void average()
{
  for(i=0;i<5;i++)
  {
    sum+=marks[i];
  }
  avg=sum/5;
  cout<<name<<", your average marks is"<<avg<<endl;
}
};

int main(){
    Student S1;
  

    S1.input();
    S1.display();
    S1.average();
    return 0;
}
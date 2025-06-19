#include<iostream>
#include<iomanip>
using namespace std;
class Student{
 public:
    int rollNumber;
    static int countStudent;
    Student()
    {
      countStudent++;
      rollNumber=countStudent;

    }
    void display()
    {
      cout<<"Your roll number is: PAS081BCT"
      <<setfill('0')<<setw(3)<<rollNumber<<endl;}
};
int Student::countStudent=0;
int main(){
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    Student s5;
    Student s6;
    Student s7;
    Student s8;
    Student s9;
    Student s10;
    Student s11;
   
    s11.display();
    s1.display();
    return 0;
}
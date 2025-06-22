//initializer list-->list means we can print list of the number instead of one two
//initializer_list<int> lst
//initializer_list<double>lst
#include<iostream>
using namespace std;
class Student
{
  public:
   Student()
   {
    cout<<"x"<<endl;
   }
   Student(initializer_list<int> lst)
   {
    for(int x:lst)
    {
      cout<<x<<endl;
    }
   }

};
int main(){

    Student s2 {};
    return 0;
}

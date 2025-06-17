#include<iostream>
using namespace std;
class employee{
  ~employee{
    
  }

};
class student{

};
class manager:public employee,student{

};
class secretary:public employee{

};
int main(){


    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Tell me your age"<<endl;
  cin>>age;
  if(age<18)
  {
    cout<<"You are less than 18"<<endl;
  }
  else if(age==18)
  {
    cout<<"You are just 18"<<endl;

  }
  else{
    cout<<"you are 18+"<<endl;
  }
}

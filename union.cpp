#include<iostream>
#include<cstring>
using namespace std;
union money{
  int age;
  char name[100];
}m;

int main(){
  m.age=14;
  strcpy(m.name,"saksham");
  cout<<m.age<<endl;
  cout<<m.name<<endl;
    
    return 0;
}
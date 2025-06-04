#include<iostream>
using namespace std;
double add(int a,double b){
  cout<<"double"<<endl;
}
int add(int a,int b){
  cout<<"int"<<endl;
}
int main(){
  add(1,2);
    
    return 0;
}
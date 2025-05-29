#include<iostream>
#include<cmath>
using namespace std;
float ar(float p,int n,float r=50){
  return(p*(pow((1+r/100),n)));
}

int main(){
  float p;
  int n;
  cout<<"Enter the value of p"<<endl;
  cin>>p;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"The value of A is"<<ar(p,n)<<endl;
  return 0;

    
}

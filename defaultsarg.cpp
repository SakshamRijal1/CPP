#include<iostream>
float function(int money,float factor=1.04){
  //factor is the default argument{
  return money*factor;
}

using namespace std;

int main(){

  int money=1000;
  cout<<"For normal people the total money will be"<<function(money)<<endl;
  cout<<"For staff people the total money will be"<<function(money,1.1)<<endl;

  
    return 0;
}
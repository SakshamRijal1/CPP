#include<iostream>
using namespace std;
int fibbo(int a)
{

  if(a==1)
  {
    return 0;
  }
  else if(a==2){
    return 1;
  }
  
  else{
    return fibbo(a-1)+fibbo(a-2);
  }
}

int main(){
int n;
int i;
cout<<"The terms of :"<<endl;
cin>>n;
for(i=1;i<=n;i++){
cout<< fibbo (i)<<endl;}
    return 0;
}
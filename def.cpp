#include<iostream>
using namespace std;
int sum(int a,int b=9,int c=100)
{
  return a+b+c;
}

int main(){
    cout<<"The sum of 5 and 15 is "<<sum(12);
    return 0;
}
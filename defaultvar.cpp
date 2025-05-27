//WAP TO ADD THREE INTEGER VARIABLE USING FUNCTION AND ILLUSTRATING THE CONCEPT OF DEFAULT ARGUMENTS
#include<iostream>
using namespace std;
int sum(int a,int b,int c=23){
 float sum=a+b+c;
  return sum;
}

int main(){
  int a=19,b=20;
  cout<<"The sum is"<<sum(a,b)<<endl;

    return 0;
}
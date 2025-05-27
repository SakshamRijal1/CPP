#include<iostream>
using namespace std;
 void value(){
 static int i=1;

 cout<<i<<endl;
   i++;
}
int main(){
 value();
 value();
    return 0;
}
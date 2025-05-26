#include<iostream>
using namespace std;

int main(){
    int a[4]={48,76,99,12};
    // int *p=a;
    cout<<a<<endl;//adress of a[0]
    cout<<*a<<endl;//76
   
    cout<<*(a+1)<<endl;//12
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a[4]={48,76,99,12};
    int *p=a;
    cout<<p++<<endl;//adress of a[0]
    cout<<*(p++)<<endl;//76
    cout<<++p<<endl;//address of 99
    cout<<*(++p)<<endl;//12
    return 0;
}
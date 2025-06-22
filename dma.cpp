#include<iostream>
using namespace std;

int main(){
    int *ptr;
    ptr=new int[5](1,2,3,4,5);
       //new operator is used to dyanmically allocate the memory in heap
   for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    delete[] ptr;//during the end od the program ,complier clear all variable except the variable in heap so we use selete keyword to remove that
    return 0;
}
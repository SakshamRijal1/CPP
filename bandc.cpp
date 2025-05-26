#include<iostream>
using namespace std;

int main(){
  //pointer airthmetic
  //1.Any ordinary variable can be assigned to the pointer variable
  int a=10;//ordinary variable
  int *ptr=&a;//pointer variable
  //2.one pointer variable can be assigned to the other pointer variable of same type
  int *ptr1;
  *ptr1=*ptr;
  cout<<*ptr1<<endl;
  //3.We can add or subtract the pointer varible but the + and - give us next variable address(value)..For eg if ptr is a pointer which 
  //has address of 1000 then ptr +1 gives next variable adress like (1002 if 2 byte int).
  cout<<ptr<<endl;
  cout<<ptr+1<<endl;
  //4We can subtract an pointer if they are on same array
  int c[3]={5,4,2};
  ptr=c+1;
  ptr1=c+2;
  cout<<ptr1 - ptr<<endl;
  //5.Two pointer variable can be compare if they are of same type
  if(ptr<ptr1){
    cout<<"Yes"<<endl;
  }
  //6.Pointer varible can be assigned to the null;
  ptr=NULL;
  cout<<ptr<<endl;
  
 


}
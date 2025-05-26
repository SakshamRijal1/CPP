#include<iostream>
using namespace std;
typedef struct saksham{
  int age;
  char name[60];
}  sk;

int main(){
 sk s[2];
   int i;
  for(i=0;i<2;i++)
  {
    cin>>s[i].age;
    cin>>s[i].name;
  }
    for(i=0;i<2;i++)
  {
    cout<<s[i].age;
    cout<<s[i].name;
  }


    
    return 0;
}
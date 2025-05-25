#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
  char a;
  cout<<"Enter the letter:"<<endl;
  cin>>a;
  switch(toupper(a))
  {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<"The letter is vowel"<<endl;
    break;
    default:
    cout<<"The letter is consonant"<<endl;
  }
}
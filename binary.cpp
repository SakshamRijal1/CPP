#include<iostream>
#include<string>
using namespace std;
class Binary{
  public:
  string s;
  int i;
  char y;
  void read();
  void check();
  void ones();
  void twos();

};
void Binary::read()
{
  cout<<"Enter a number"<<endl;
  cin>>s;
}
void Binary::check()
{
  for(i=0;i<s.length();i++)
  {
    if(s.at(i)!='0' && s.at(i)!='1')
    {
      cout<<"Not a binary"<<endl;
      exit(0);
    
    }}
      cout<<"Binary format"<<endl;
      cout<<"As it have binary do you want to convet in ones complement (y or f)"<<endl;
      cin>>y;
      if(y=='Y'||y=='y')
      {
        ones();

         cout<<"As it have binary do you want to convet in twos complement (y or f)"<<endl;
      cin>>y;
      if(y=='Y'||y=='y')
      {
        twos();
      }
      else{
        cout<<"Thanks"<<endl;
      }
    }
      }
      else{
        cout<<"Thanks"<<endl;
      }
    }

void Binary::ones(){
  for(i=0;i<s.length();i++)
  {
    if(s.at(i)=='0')
    {
      s.at(i)='1';

    }
    else{
       s.at(i)='0';
    }
  }
  cout<<s<<endl;
  }
void twos()
{
  int k=s.length()-1;

   for(i=k;i<=0;i--)
  {
    if(s.at(i))
  }
  cout<<s<<endl;
  }
}

int main(){
    Binary b1;
    b1.read();
    b1.check();

    return 0;
}
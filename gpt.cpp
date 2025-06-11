#include<iostream>
#include<string>
using namespace std;
class BankAcoount{
  private:
  double balance;
  double with;
  double depo;
  public:
 string name;
 void setInfo(string name,double with,double depo)
 {
  this->name=name;
  this->with=with;
  this->depo=depo;
 }
 void getInfo()
 {
  cout<<"-----------"<<name<<",Banking dashboard!!"<<"-----------"<<endl;
  cout<<"Your wirthdraw balance is "<<with <<" & deposte balance is "<<depo<<"."<<endl;
  if(depo>=with)
  {
     cout<<"Current balance="<<depo-with<<endl;

  }
  else{
    cout<<"ERRROR!!!!!!!!!!!!!!!!"<<endl;
  }
 }

};

int main(){
BankAcoount b1;
b1.setInfo("Saksham Rijal",3000.89,500.90);
b1.getInfo();
    
    return 0;
}
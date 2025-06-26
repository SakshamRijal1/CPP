#include<iostream>
using namespace std;
class BankAccount{
  int balance;
  public:
  void setData(int balance)
  {
    this->balance=balance;
  }
  friend void  transfer(BankAccount &B1,BankAccount& B2);
};
void  transfer(BankAccount &B1,BankAccount &B2){
  int i;
  cout<<"Your money is :Rs"<<B1.balance<<endl;
  if(B1.balance<=0)
  {
    cout<<"You have insufficient amount"<<endl;

  }
  else{
  cout<<"What amount do you want to send ?"<<endl;
  cin>>i;
  cout<<"Sending money ..."<<endl;
  cout<<"Transfer sucessfull"<<endl;
  B1.balance-=i;
  B2.balance+=i;

  cout<<"Sender money"<<B1.balance<<endl;
  cout<<"Recvier moeny"<<B2.balance<<endl;}
}
int main(){
    BankAccount b1;
    BankAccount b2;
    b1.setData(60000);
    b2.setData(70403);
    transfer(b1,b2);
    return 0;
}
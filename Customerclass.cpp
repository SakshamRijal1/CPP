#include <iostream>
#include <string>
using namespace std;
class Customer
{
  string name;
  string product;
  double paid;

public:
  void take(string n, string pr, double p);
  void display();
};
void Customer::take(string n, string pr, double p)
{
  name = n;
  product = pr;
  paid = p;
}
void Customer:: display()
{
  if (paid > 20000)
  {
    cout << "Hello " << name << " !you have bought" << product << " of Rs " << paid << " so you have a discount of 5%" << endl;
    cout << "Enjoy!!Your totalprice is Rs " << paid * 0.95 << endl;
    cout << "Thanks for visting us" << endl;
  }
  else if(paid<=20000 && paid>=1)
  {
    cout << "Hello " << name << " !you have bought" << product << " of Rs " << paid << endl;
    cout << "Your totalprice is Rs " << paid << endl;
    cout << "Thanks for visting us" << endl;
  }
  else{
    cout<<"Invalid price Rs"<<paid<<endl;
  }
}


int main()
{
    Customer c1;
  string name;
  string product;
  double paid;


  cout<<"Enter your name"<<endl;
  getline(cin,name);
 

  cout<<name<<" !!What did you bought?"<<endl;
getline(cin,product);

   cout<<name<<"!! You have bought the "<<product<<" What is the price?"<<endl;
  cin>>paid;
  c1.take(name,product,paid);
  c1.display();



  return 0;
}
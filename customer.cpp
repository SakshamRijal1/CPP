//create a class customer with attributes customer name,producy
//bought and paid amount.Create suitable methods to take and display the infp with a clause taht if amount is greater than 20000 then a discount 5% given else no discount is granted
#include<iostream>
#include<cmath>
using namespace std;

class Customer
{
  public:
    string name;
    string product;
    double amount_paid;

    void take()
    {
      cout << "Customer name: ";
      getline(cin >> ws, name);

      cout << "Product bought: ";
      getline(cin >> ws, product);

      cout << "Amount paid: ";
      cin >> amount_paid;  
    }


    void display()
    {
      if (amount_paid > 20000)
      {
        amount_paid -= 0.05*amount_paid;
      }

      cout << "Hello! " << name << " your payable amount of " << product << " is " << (double)amount_paid;
    }
};

int main()
{
  Customer customer;
  customer.take();
  customer.display();

  return 0;
}
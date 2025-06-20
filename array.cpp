#include<iostream>
using namespace std;
class Shop{
  int itemId[100];
  int itemPrice[100];
  int counter;
  int i;
  public:
  void initCounter(){
    counter=0;
  }
  void getPrice();
  void setPrice();
};
void Shop::getPrice()
{
  cout<<"Enter id of your iteam"<<endl;
  cin>>itemId[counter];
 cout<<"Enter price of your iteam"<<endl;
 cin>>itemPrice[counter];
counter++;
}
void Shop::setPrice()
{
  for(i=0;i<counter;i++)
  {
    cout<<itemId[i];
    cout<<itemPrice[i];
  }
}
int main(){
    Shop s1;
    s1.initCounter();
    s1.getPrice();
    s1.getPrice();
    s1.getPrice();
    s1.getPrice();
    s1.setPrice();
    return 0;
}
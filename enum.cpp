//WAP TO DEFINE ENUMERATOR WITH YOUR CHOICE .INSTEAD OF DEFAULT VALUE,ASSIGN YOUR OWN INTERGER VALUE TO ENUMERATOR 
#include<iostream>
using namespace std;

enum day
{
  morning=5,afternoon,night
};

int main()
{
  day persent= afternoon;
  day past= morning;
  day future=night;

  cout << persent<<endl;;
  cout << past<<endl;
  cout << future<<endl;

  return 0;
}
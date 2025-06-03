
#include<iostream>
#include<string>
using namespace std;
class Mission{
  public:
  string* namePtr;
  int* rankPtr;
  Mission(string name ,int rank)
  {
    namePtr=new string;
    *namePtr=name;
    rankPtr=new int;
    *rankPtr=rank;

  }
  Mission(Mission &realOb){
    this->namePtr=realOb.namePtr;
    rankPtr=new int;
    *(rankPtr)=*(realOb.rankPtr);
  }

  void getInfo(){
    cout<<*namePtr<<endl;
    cout<<*rankPtr<<endl;
  }

  ~Mission(){
    cout<<"Hey i am destructor"<<endl;
    delete namePtr;
    delete rankPtr;
  }
};

int main(){
Mission m1("Saksham",1);

m1.getInfo();

    return 0;
}
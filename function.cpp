#include<iostream>
int & saksham(int &a ,int &b )
{
    int temp=a;
    a=b;
    b=temp;
    return b;
}

using namespace std;
int main()
{
    int a=0589;
    int b=2393;
    cout<<"Before using function a="<<a<< "and b="<<b<<endl;

    saksham(a,b)=1883;
     cout<<"After  using function a="<<a<< "and b="<<b<<endl;

}

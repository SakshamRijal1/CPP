#include<iostream>
using namespace std;

int main(){

    int i;
    int N;
    int sum=0;
    float avg;
    
    cout<<"How many elements"<<endl;
    cin>>N;
     int *ptr=new int[N];
    cout<<"Enter "<<N<<" elements"<<endl;
      for(i=0;i<N;i++)
      {
        cin>>*(ptr+i);
      }
for(i=0;i<N;i++){
  sum+=*(ptr+i);
}
avg = static_cast<float> (sum)/ N;
cout<<avg<<endl;
    delete[] ptr;
    
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int a[100];

    cout<<"Enter how many wnats:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" number"<<endl;
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        bool isprime=true;
        if(a[i]%2==0)
        {
            switch(a[i]<50)
            {
                case 1:
                cout<<a[i]<<" is small even"<<endl;
                break;
                case 0:
                cout<<a[i]<<" is large even"<<endl;
                break;

            }

        }
        else{
            if(a[i]<=1)
            {
                isprime=false;
            }
            else{
                for(j=2;j<=a[i]/2;j++){
                    if(a[i]%j==0){
                        isprime=false;
                    }
                }
            }

            if(isprime==true)
            {
                cout<<a[i]<<" is a prime number"<<endl;

            }
            else{
                cout<<a[i]<<" is a composite number"<<endl;
            }
        }
    }
}
/* Write a C++ program that performs the following:

Ask the user how many numbers they want to enter.

Take input of those numbers using a loop.

For each number:

If it's even, use switch to:

Print "Small Even" if number is less than 50

Print "Large Even" if number is 50 or more

If it's odd, use if-else to:

Check whether it's a prime number or not, and print accordingly */

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

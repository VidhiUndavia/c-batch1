#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"SWAP FUNCTION"<<endl;
    cout<<endl<<"Value of a "<<a<<" value of b "<<b<<endl;

}
int main()
{
    int a,b;

    cout<<endl<<"Enter value ";
    cin>>a;
    cout<<endl<<"Enter 2nd value ";
    cin>>b;
    swap(a,b);
    cout<<"MAIN FUNCTION"<<endl;
    cout<<endl<<"value of a "<<a<<" value of b "<<b;
    return 0;
}
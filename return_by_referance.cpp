#include<iostream>
using namespace std;

int & max(int &x,int &y)
{
    if(x>y)
    {
        x=-1;
        return(x);
    }
    else
    {
        y=-1;
        return(y);
    }
}
int main()
{
    int a,b,maximum;
    double c;

    cout<<endl<<"Enter first value ";
    cin>>a;
    cout<<endl<<"Enter second value ";
    cin>>b;
    maximum=max(a,b);
    cout<<endl<<"The value if a is:- "<<a;
    cout<<endl<<"The value if b is:- "<<b;
    cout<<endl<<"The value if maximum is:- "<<maximum<<endl;

    return 0;
}
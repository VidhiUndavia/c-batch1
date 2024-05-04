#include<iostream>
using namespace std;

inline int cube(int number)
{
    return(number*number*number);
}
int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;

    int c=cube(a);//number*number*number
    cout<<" The cube of the given number is "<<c<<endl;
    return 0;
}
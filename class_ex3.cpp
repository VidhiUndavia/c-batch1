#include<iostream>
using namespace std;

class series
{
    int number,rev;
    public:
        void getnumber();
        void reverse();

};
void series::getnumber()
{
    cout<<"Enter the number you want to reverse ";
    cin>>number;
}
void series::reverse()
{
    int reminder,temp;
    rev=0;
    temp=number;
    while(temp>0)
    {
        reminder=temp%10;
        temp=temp/10;
        rev=(rev*10)+reminder;
    }

    cout<<"Reverse = "<<rev;
    
}
int main()
{

    series s1;
    s1.getnumber();
    s1.reverse();
    return 0;
}
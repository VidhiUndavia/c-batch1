#include<iostream>
using namespace std;

class simpleinterest
{
    int year;
    long principal;
    float rate;
    double interest,total;
    public:
        void getdata()
        {
            cout<<"Enter Amount = ";
            cin>>principal;
            cout<<"Enter Rate = ";
            cin>>rate;
            cout<<"Enter Year = ";
            cin>>year;
        }
        void calculation()
        {
            cout<<"*********************************"<<endl;
            cout<<"Amount = "<<principal<<endl;
            cout<<"Rate = "<<rate<<endl;
            cout<<"Year = "<<year<<endl;
            cout<<"*********************************"<<endl;
            interest=(principal*rate*year)/100;
            total=interest+principal;
            cout<<"Interest = "<<interest<<endl;
            cout<<"Total payable amount = "<<total<<endl;
        }

}s3,s4;
int main()
{
    simpleinterest s1,s2;

    s1.getdata();
    s1.calculation();

    s2.getdata();
    s2.calculation();
    return 0;
}
#include<iostream>
using namespace std;

class Base
{
    public:
        int num1,num2;
        void getData()
        {
            cout<<"Enter number1 and number2 ";
            cin>>num1>>num2;
        }
};
class Derived : public Base
{
    public:
        int result;
        void mul()
        {
            getData();
            result=num1*num2;
            cout<<"Multiplication = "<<result;
        }
};
int main()
{    
    Derived d1;
    d1.mul();
    return 0;
}

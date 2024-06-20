#include<iostream>
using namespace std;

class Salary
{
    public:
        long sal;
        void getSalary()
        {
            cout<<"Enter Salary = ";
            cin>>sal;
        }
};
class Bonus : public Salary
{
    public:
        float bon;
        long total;
        void getBonus()
        {
            getSalary();
            bon=sal*0.10;
            total=sal+bon;
            cout<<"Salary = "<<sal<<endl;
            cout<<"Bonus = "<<bon<<endl;
            cout<<"Total Salary = "<<total;
        }
};
int main()
{
    Bonus b1;
    b1.getBonus();
    return 0;
}

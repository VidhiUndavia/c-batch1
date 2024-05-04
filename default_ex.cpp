#include<iostream>
using namespace std;

void show(char ch,int size=10)
{
    for (int i = 0; i <=size; i++)
    {
        cout<<ch;
    }
    
}
void area(int size,int length=10,int width=10)
{
    int area=length*width;
    cout<<endl<<"Area = "<<area<<endl;

}
int main()
{
    int l,w,size;
    show('@');
    size=30;
    show('*',size);
    cout<<"Enter length = ";
    cin>>l;
    cout<<"Enter width = ";
    cin>>w;
    area(l,w);

    return 0;
}
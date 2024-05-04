#include<iostream>
using namespace std;

int area(int length)//square
{
    return(length*length);
}
int area(int length,int width)//rectangle
{
    return(length*width);
}
float area(float radius)//circle
{
    return (3.14*radius*radius);
}
double area(double base,double height)//triangle
{
    return(base*height)/2;
}
int main()
{
    int length,width,rectangle,square;
    float radius,circle;
    double base,height,triangle;

    cout<<"Enter the length = ";
    cin>>length;
    square=area(length);
    cout<<"Area of the Square = "<<square<<endl;

    cout<<"Enter the width = ";
    cin>>width;
    rectangle=area(length*width);
    cout<<"Area of the Rectangle = "<<rectangle<<endl;

    cout<<"Enter the Radius = ";
    cin>>radius;
    circle=area(radius);
    cout<<"Area of the Circle = "<<circle<<endl;

    cout<<"Enter the base = ";
    cin>>base;
    cout<<"Enter the height = ";
    cin>>height;
    square=area(base,height);
    cout<<"Area of the Triangle = "<<triangle<<endl;


    return 0;
}
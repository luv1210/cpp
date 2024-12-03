#include<iostream>
using namespace std;
 class Shape
 {
    public:
    Shape(int a)
    {
        cout<<"the area of square:"<<a*a<<endl;
    }
    Shape(int l,int b)
    {
        cout<<"the area of rectangle:"<<l*b<<endl;
    }
    Shape(double pi,int r)
    {
        cout<<"area of circle:"<<pi*r<<endl;
    }
 };
 int main(){
    class Shape s1(10,4),s2(5,9),s3(3.14,6);
 }
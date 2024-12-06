#include<iostream>
using namespace std;
class Complex
{
    int x;
    int y;
    public:
    Complex()
    {
        x=0;
        y=0;
    }
    Complex(int a,int b)
    {
        x=a;
        y=b;
    }
    Complex operator-(Complex z){
        Complex t;
        t.x=x-z.x;
        t.y=y-z.y;
        return t;
  }
  void printdata() 
  {
    cout<<"value of x:"<<x<<endl;
    cout<<"value of y:"<<y<<endl;
  }

};
int main()
{
    class Complex s1,s2,s3;
    s1=Complex(50,40);
    s2=Complex(30,20);
    cout<<"first object:"<<endl;
    s1.printdata();
    cout<<"second object:"<<endl;
    s2.printdata();
    cout<<"final output:"<<endl;
    s3=s1-s2;
    s3.printdata();
    return 0;
}
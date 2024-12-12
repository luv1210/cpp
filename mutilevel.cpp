#include<iostream>
using namespace std;
class Base1{
protected:
int a;
public:
void setA(){
    cout<<"enter value of a:";
    cin>>a;
}
};
class Base2:public Base1{
protected:
int b;
public:
void setB(){
    cout<<"enter value of b:";
    cin>>b;
}
};
class Derive:public Base2{
    public:
    void product(){
        cout<<"value of a and b:"<<a+b;
    }
};
int main(){
    Derive obj;
    obj. setA();
    obj.setB();
    obj.product();
}
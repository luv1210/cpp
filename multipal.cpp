#include<iostream>
using namespace std;
class Base1{
protected:
int a;
public:
void setA(){
    cout<<"enter the value of a:";
    cin>>a;
}
};
class Base2{
protected:
int b;
public:
void setB(){
    cout<<"enter the value of b:";
    cin>>b;
}
};
class Derive:public Base1,public Base2{
    public:
    void product(){
        cout<<"addition of a and b:"<<a+b;

    }

};

int main(){
    Derive obj;
    obj. setA();
    obj.setB();
    obj.product();
}

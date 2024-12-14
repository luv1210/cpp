#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter the value of a:";
        cin>>a;
    
    }
};
class derive1:public Base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"enter the value of b:";
        cin>>b;
    
    }
    void sum(){
        cout<<"value a and b sum:"<<a+b;

    }
};
class derive2:public Base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter the value of c:";
        cin>>c;
    
    }
    void mult(){
        cout<<"value a and b sum:"<<a*b;

    }
};
 int main(){
    derive1 obj1;
    obj1.setA();
    obj1.setB();
    obj1.sum();
    derive2 obj2;
    obj2.setA();
    obj2.setC();
    obj2.mult();
 }
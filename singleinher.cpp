#include<iostream>
using namespace std;
class Base{

    int a=10;
     public:
     int b=20;
     
     protected:
     int c=30;
};

class Derive:public Base{
    public:
    void printdata(){
        cout<<c<<endl;
        cout<<b;
    }
};

int main(){
    Derive s;
    s.printdata();
}
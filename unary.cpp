#include<iostream>
using namespace std;
class Complex{
    int x;
    int y;

    public:
    void getdata(int a,int b){
        x=a;
        y=b;
    }
    void printdata(){
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
    }
};

int main(){
    class Complex s1;
    s1.getdata(-5,6);
    s1.printdata();
    cout<<"after function call:"<<endl;
    -s1;
    s1.printdata();
}
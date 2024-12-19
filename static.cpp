#include<iostream>
using namespace std;
class base{
    static int count;
    int a=0;
    public:
    base(){
        count++;
        a++;
    }
    void printdata(){
        cout<<"value of a:"<<a<<endl;
    }
    static void print(){
        cout<<"value of count:"<<count<<endl;
    }

};
int base::count=55555;
int main(){
    class base x;
    x.printdata();
    x.print();
    base y;
    y.printdata();
    y.print();
    base z;
    z.printdata();
    z.print(); 
}
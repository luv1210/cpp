#include<iostream>
using namespace std;
class Base{
protected:
    int a;
    public:
    void setA (){
        cout << "Enter valur of a:";
        cin >> a;
    }
};
class Drieved1:public Base{
    public:
    void printdata(){
        cout << "Value of a:" << a;
    }
};

class Drived2:public Base{
    protected:
        int b;
        public:
        void setB(){
            cout << "Enter value of b:";
            cin >> b;
        }
};
class Drived3: public Drived2{
protected:
    int c;
    public:
      void setC(){
            cout << "Enter value of c:";
            cin >> c;
        }
       
        void sumabc(){
            cout << "sum of a+b+c" << a + b + c;
        }
};
int main(){
    Drieved1 obj;

    obj.setA();
    obj.printdata();

    Drived3 obj3;

    obj3.setA();
    obj3.setB();
    obj3.setC();
    obj3.sumabc();
}
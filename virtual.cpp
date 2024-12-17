#include<iostream>
using namespace std;
class Base{
    public:
    virtual void desplay()
    {
        cout<<"Base class function call";
    }
};
class Derive:public Base{
    public:
    void desplay()
    {
        cout<<"Derive class function call";

    }
};
int main(){
    Base *p;
    Derive obj;
    p=& obj;
    p->desplay();
}
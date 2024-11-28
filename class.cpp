#include<iostream>
using namespace std;
class Students
{
    protected:
    int b=20;
    private:
    int c=30;
    public:
    int a=10;
    void getdata(){
        cout<<b<<"||"<<c;
    }

};
int main(){
    Students s1;
    cout<<s1.a;
    s1.getdata();
}
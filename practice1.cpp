#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;

    cin>>a;
    cout<<a;
    cin>>b;
    cout<<b;
    cin>>c;
    cout<<c;

    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b<<endl;
    return 0;

}
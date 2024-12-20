#include<iostream>
using namespace std;

// template<class t>
// void display(t a)
// {
//     cout<<"display tamplate:"<<a<<endl;

// }
// tamplate<class t,class y>
// void display(t a,y b)
// {
//     cout<<"display tamplate:"<<a<<'\t'<<b<<endl;
// }
 template<class t>
t display(t a,t b)
{
    return a+b;
}
int main(){
    // display(10,20);
    // display('A',10);
    // display(10.20,'B');
    cout<<display(10.2,20.3);
  
}
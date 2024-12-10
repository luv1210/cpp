#include<iostream>
using namespace std;
 
class a{
    int number;

    public:
    a(int x){
        number=x;
    }
    void friend largest(a a1,a a2);
};
void largest(a a1,a a2)
{
    if(a1.number>a2.number)
    {
        cout<<" A1 is largest: "<<a1.number;
    }
    else if(a2.number>a1.number)
    {
        cout<<"A2 is largest: "<<a2.number;
    }
    else
    {
        cout<<"Numbers  are equal";
    }
}
int main()
{ 
    int num;
 
    cout<<" Enter number for A1 - ";
    cin>>num;
    a a1(num);
 
    cout<<"Enter number for A2 - ";
    cin>>num;
    a a2(num);
 
    largest(a1,a2);
    cout<<"\n";
 
    return 0;
}
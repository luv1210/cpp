#include<iostream>
using namespace std;
class Student
{
    int adnum;
    char sname[20];
    float eng,math,science;
    float total=0;
    int ctotal;
    public:
    Student()
    {
        cout<<"enter the adnum:";
        cin>>adnum;
        cout<<"enter the sname:";
        cin>>sname;
        cout<<"enter mark of eng:";
        cin>>eng; 
        cout<<"enter mark of math:";
        cin>>math;
        cout<<"enter mark og science:";
        cin>>science;
    }
    void printData()
    {
        cout<<"adnum:"<<adnum<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"eng:"<<eng<<endl;
        cout<<"math:"<<math<<endl;
        cout<<"science:"<<science<<endl;
        cout<<"total:"<<ctotal<<endl;
    }
~ Student(){
    cout<<"destructor is call";
}
};
int main()
{
    Student s1;
    s1.printData();
}

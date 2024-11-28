#include<iostream>
using namespace std;
class Student
{
    private:
    int adnum;
    char sname[20];
    float eng,math,science;
    float total=0;
    float ctotal(float eng,float math,float scince);
    public:
    void takedata(){
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
    void showdata(){
        cout<<"adnum:"<<adnum<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"eng:"<<eng<<endl;
        cout<<"math:"<<math<<endl;
        cout<<"science:"<<science<<endl;
        cout<<"total:"<<ctotal(eng,math,science)<<endl;
    }

};
float student :: ctotal(float eng,float math,float science){
    return eng+math+science;
}
int main()
{
    student s1;
    s1.take data();
    s1.show data();

}
#include<iostream>
using namespace std;

class Report {
private:
    int adno;
    char name[20];
    float marks[5];
    float avreage;
    float getavg();

    public:
    int redinginfo (){
        cout << "Enter  adno:";
        cin >> adno;
        cout << "Enter name:";
        cin >> name;
        for (int i = 0; i <5; i++)
        {
            cout << "Enter marks of sub:" << i << ":";
            cin >> marks[i];
        }
        
    }

    float displayinfo(){
        cout << "adno:" << adno<<endl;
        cout << "Name:" << name<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "marks of sub" << i << ":" << marks[i]<<endl;
        }
        cout << "Average is:" << getavg();
    }
};

float Report::getavg(){
    float total =0;
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    avreage = total / 5;
    return avreage;
}
int main (){
    Report r1;
    r1.redinginfo();
    r1.displayinfo();
}
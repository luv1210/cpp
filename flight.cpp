#include<iostream>
using namespace std;

class DATA
{
    private:
    int flightnumber;
    char destination[50];
    float distance;
    float fuel;
    int calfuel(float distance,float fuel);

    public:
    void FEEDINFO(){

        cout<<"enter the flightnumber:- ";
        cin>>flightnumber;
        cout<<"enter the destination:- ";
        cin>>destination;
        cout<<"enter the distance of travel:- ";
        cin>>distance;
    }

    void SHOWINFO(){
        cout<<"flightnumber is:- "<<flightnumber<<endl;
        cout<<"flight destination is:- "<<destination<<endl;
        cout<<"total distance is:- "<<distance<<endl;
        cout<<"total fuel required:- "<<calfuel(distance,fuel)<<endl;

    }
};

int DATA::calfuel(float distance,float fuel){
    if(distance<=1000){
        fuel=1000*500;
    }else if(distance>=1000&&distance<=2000){
        fuel=1000*500+(distance-1000)*1100;
    }else if(distance>=2000){
        fuel=1000*500+1000*1100+(distance-1600)*2200;
    }
    
    return fuel;
}

int main(){
    DATA s1;
    s1.FEEDINFO();
    s1.SHOWINFO();
}
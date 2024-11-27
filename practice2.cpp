#include<iostream>
using namespace std;
int main(){
    int units;
    int totalbill=0;
    cout<<"enter the no of units";
    cin>>units;
    if(units>=0 && units<=100){
        totalbill=units*0.60;
    }else if(units>=101 && units<=200){
        totalbill=units*0.80;
    }else {
        totalbill=units*0.90;
    }
    cout<<"the bill to be paid:"<<totalbill;
    return 0;
    
}
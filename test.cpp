#include<iostream>
using namespace std;
class Test
{
    private:
    int testcode;
    char description[50];
    int nocandidate;
    int centerreqd;
    int calcntr(int nocandidate);

    public:
    void schedule(){
        cout<<"enter the testcode:";
        cin>>testcode;
        cout<<"enter the description: ";
        cin>>description;
        cout<<"enter the nocandidate:";
        cin>>nocandidate;
   
       
    }

    void disptest(){
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"centerreqd:"<<calcntr(nocandidate)<<endl;

    }
};
 int Test::calcntr(int nocandidate){
    centerreqd=(nocandidate/100+1);
    return centerreqd;
 }
 int main(){
    Test s1;
    s1.schedule();
    s1.disptest();
 }
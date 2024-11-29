

#include<iostream>

using namespace std;

class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    int batavg;
    int calavg(int run,int innings,int notout);

    public:
    void readData(){
        cout<<"enter the bcode:- ";
        cin>>bcode;
        cout<<"enter the name:- ";
        cin>>bname;
        cout<<"enter the runs:- ";
        cin>>runs;
        cout<<"enter the innings:- ";
        cin>>innings;
        cout<<"enter the notout:- ";
        cin>>notout;

    }
    void displayData(){
        cout<<"bcode is:- "<<bcode<<endl;
        cout<<"bname is:- "<<bname<<endl;
        cout<<"total inning is:- "<<innings<<endl;
        cout<<"not out is:- "<<notout<<endl;
        cout<<"total run is:- "<<runs<<endl;
        cout<<"batsman average is:- "<<batavg<<endl;
        cout<<"total average is:- "<<calavg(runs,innings,notout)<<endl;

    }
};

int batsman::calavg(int run,int innings,int notout){
    batavg= runs/(innings-notout);
    return batavg;

}

int main(){
    batsman s1;
    s1.readData();
    s1.displayData();

}
#include<iostream>
#include<stdio.h>
using namespace std;
struct menu{
    int number;
    string item;
    int price;
};

class Restraurent{
  public:

  int custmberchoise;
  int dish;
  int quantity;
  int gst;

  protected:

  void star(){
    cout<<"*************************************************************************************************************************************************"<<endl;
  }

  void data(){
    cout<<"\t\t\t\t\tMENUpress         :1"<<endl;
    cout<<"\t\t\t\t\tORDER DISHpress   :2"<<endl;
    cout<<"\t\t\t\t\tORDER STATUSpress :3"<<endl;
    cout<<"\t\t\t\t\tMAKE BILL         :4"<<endl;
    cout<<"\t\t\t\t\tEXITpress         :0"<<endl;
  }

  void choise(){
    cout<<"enter your choise:";
    cin>>custmberchoise;
  }

  int returnchoise(){
    return custmberchoise;
  }

  void dish(){
    cout<<"Enter dish number";
    cin>>dish;
    cout<<"Enter Quantity";
    cin>>quantity;
  }

  int returndish(){
    return dish;
  }

};

#include <iostream>
#include<stdio.h>
using namespace std;
struct Menus
{
  int no;
  string item;
  int price;
};

class Hotel{
  protected:
  int userChoise;
  int Dish;
  int qunty;
  int Gst;

public:
void star(){
  cout<<"****************************************************************************************************************************************************************"<<endl;
}

void info(){
cout<<"\t\t\t\t\tFor Menu Press       :1"<<endl;
cout<<"\t\t\t\t\tOreder Dish Press    :2"<<endl;
cout<<"\t\t\t\t\tcurrent Status Press :3"<<endl;
cout<<"\t\t\t\t\tMake Bill press      :4"<<endl;
cout<<"\t\t\t\t\tExit Press           :0"<<endl;
}

void Choise(){
  cout<<"Enter your Choise:";
  cin>>userChoise;
}

int returnChoise(){
  return userChoise;
}

void choisedish(){
   cout<<"Enter Dish Number:";
   cin>>Dish;
   cout<<"Entr Quntity:";
   cin>>qunty;
}
int returnchoisedish(){
  return Dish;
}

int quntity(){
  return qunty;
}

int totalprice(int price){
   Gst= price/100*18;
   return Gst;
}

void dottedline(){
  cout << "------------------------------------------------------------------";
}

};

int main (){
 int price = 0;
  Menus m1[5] = {
      {0,"item",0},
      {1,"Paneer Pakoda",220},
      {2,"Palak Paneer ",170},
      {3,"Veg Burger",100},
      {4,"Veg  Sandwich",160},
     
  };
    class Hotel h1;
   

    while (1)
    {
    h1.star();
    h1.info();
    h1.star();
    h1.Choise();
    h1.star();

    if(h1.returnChoise()==0){
      break;
    }else if(h1.returnChoise()>=5){
      cout << "Enter valid input" << endl;
    } else{
      switch (h1.returnChoise())
      {
      case 1:
      
      
         cout << "\t\tMenu"<<endl;
       for(int i = 0;i<5;i++){
         if (i != 0)
         {
           cout << m1[i].no << "\t" << m1[i].item << "\t" << m1[i].price << endl;
        }
       }
      
        break;
      case 2:

        

              cout<<"\t\tOreder Dish"<<endl;
              h1.choisedish();
              h1.star();
              cout << endl<<"Yor Orede confirmed" << endl;
              price = m1[h1.returnchoisedish()].price*h1.quntity();
              

              break;
        case 3:
        

           cout<<"Dish name\t"<<"Quntity\t"<<"price"<<"\t"<<"total"<<endl;
           cout<<m1[h1.returnchoisedish()].item<<"\t"<<h1.quntity()<<"\t"<<m1[h1.returnchoisedish()].price<<"\t"<<price<<endl;
        
        break;
        case 4:
          h1.dottedline();
          cout <<endl<< "\t\t\tBhagirath Hotel"<<endl;
          cout << "\t\t    436 Varachha Road Surat"<<endl;
          cout << "\t\t\tMobile NO:7863074845"<<endl;
          h1.dottedline();

          cout <<endl<<"Date:17/12/2024"<<endl;
          cout << "Time:12:00"<<endl;
          h1.dottedline();

           cout<<endl<<"Dish name\t"<<"Quntity\t"<<"price"<<"\t"<<"total"<<endl;
           h1.dottedline();

           cout<<endl<<m1[h1.returnchoisedish()].item<<"\t"<<h1.quntity()<<"\t"<<m1[h1.returnchoisedish()].price<<"\t"<<price<<endl;
           h1.dottedline();

           cout <<endl<< "GSt\t\t"<<"18%\t\t" <<h1.totalprice(price) <<endl;
           h1.dottedline();

           cout << endl<<"Total Bill\t\t\t" <<price+ h1.totalprice(price)<<endl;
           h1.dottedline();

           cout <<endl<< "\t\tThank you for your Visit"<<endl;
           break;
      default:
        cout << "Enter valid input" << endl;
        break;
      }
      if (h1.returnChoise()==4)
      {
        break;
      }
      
    }
    }
  return 0;
}
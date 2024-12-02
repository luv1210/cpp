#include<iostream>

using namespace std;

class BOOK
{
    private:
    int bookno;
    char booktitle[20];
    int price;
    int totalcost(int copies,int price);
    int copies;

    public:
    void purchase(){
        cout<<"enter the book number:- "<<bookno<<endl;
        cin>>bookno;
        cout<<"enter the book title:- "<<booktitle<<endl;
        cin>>booktitle;
        cout<<"enter the qty of copies:- "<<copies<<endl;
        cin>>copies;
        cout<<"enter the price of one copie:- "<<price<<endl;
        cin>>price;
    }
    void input(){
        cout<<"Book number is:- "<<bookno<<endl;
        cout<<"Book title is:- "<<booktitle<<endl;
        cout<<"book price per copy is:- "<<price<<endl;
        cout<<"Total qty of book is:- "<<copies<<endl;
        cout<<"Total amount is:- "<<totalcost(copies,price)<<endl;

    }
};

int BOOK::totalcost(int copies,int price){
        price=price*copies;
        return price;

}

int main(){
    BOOK s1;
    s1.purchase();
    s1.input();
}
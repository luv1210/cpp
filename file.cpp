#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[50];
    ofstream os;
    os.open("xyz.txt");

    cout<<"please enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"please enter contact number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    // read file data
    ifstream is;
    string line;
    is.open("xyz.txt");
    cout<<endl;
    cout<<"reading from a text file:"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}
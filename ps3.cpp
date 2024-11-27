#include<iostream>
using namespace std;
int main(){
   
for(int i=0;i<=7;i++){
    if(i<5){
         for(int j=i;j<=4;j++){
        cout<<" ";
    }
       
    
    for(int k=0;k<i;k++){
        cout<<" *";
    }
    }else{
        for(int j=4;j<=i;j++){
            cout<<" ";
        }
        for(int k = i;k<=7;k++){
            cout<<" *";
        }
    }
        cout<<endl;

}
    return 0;
}
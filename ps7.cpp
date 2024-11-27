#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<n%2;
            n++;
        }
        cout<<endl;
    }
    return 0;
}

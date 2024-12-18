#include <iostream> 
using namespace std; 
 
struct Account 
{ 
  int pin; 
  string name; 
  int balance; 
}; 
 
class Bank 
{ 
private: 
  int pin; 
 
public: 
  int userchoose; 
  int withdrawamt; 
  int depositamt; 
 
  int custemerpin() 
  { 
    cout << "Enter your pin:"; 
    cin >> pin; 
  } 
 
  int custemerpinreturn() 
  { 
    return pin; 
  } 
 
  void usermenual() 
  { 
    cout << "Press 1 withdraw case" << endl; 
    cout << "Press 2 deposit case" << endl; 
    cout << "Press 3 Check Baleance" << endl; 
    cout << "Press 4 exit" << endl; 
  }; 
 
  void userchoosef() 
  { 
    cout << "Enter your Choose:"; 
    cin >> userchoose; 
  }; 
  int ueserchhosereturn() 
  { 
    return userchoose; 
  } 
 
  void withdraw() 
  { 
    cout << "Enter amout to widro:"; 
    cin >> withdrawamt; 
  } 
  int withdrawreturn() 
  { 
    return withdrawamt; 
  } 
 
  void deposit() 
  { 
    cout << "Enter deposit amout:"; 
    cin >> depositamt; 
  } 
  int depositreturn() 
  { 
    return depositamt; 
  } 
}; 
 
int main() 
{ 
  class Bank b1; 
  Account user[8] = { 
      {1210, "luv", 5000}, 
      {1951, "hetu", 6000}, 
      {7077, "zeel", 7000},
      {9659,"darshik",10000},
      {6699,"payal",15000},
      {7887,"nidhi",9000},
      {6356,"ravi",20000},
      {6625,"naresh",30000}, 
 
  }; 
 
  b1.custemerpin(); 
  int pin = b1.custemerpinreturn(); 
 
  for (int i = 0; i < 8; i++) 
  { 
    if (user[i].pin == pin) 
    { 
 
      while (1) 
      { 
        cout << "Name:" << user[i].name << endl; 
        cout << "Balnce:" << user[i].balance << endl; 
        b1.usermenual(); 
        b1.userchoosef(); 
        int userchoose = b1.ueserchhosereturn(); 
 
        if (userchoose == 4) 
        { 
          cout<<"thank you,visit again";
          break; 
        } 
        else 
        { 
          switch (userchoose) 
          { 
          case 1: 
            b1.withdraw(); 
            if (user[i].balance > b1.withdrawreturn()) 
            { 
              user[i].balance -= b1.withdrawreturn(); 
            } 
            else 
            { 
              cout << "your balsenc is " << user[i].balance << endl; 
            } 
            cout << "widrow amout is:" << b1.withdrawreturn() << endl 
                 << endl; 
            break; 
          case 2: 
            b1.deposit(); 
            user[i].balance += b1.depositreturn(); 
            cout << "deposit amout is:" << b1.depositreturn() << endl 
                 << endl; 
            break; 
          case 3: 
            cout << "Your balence is:" << user[i].balance << endl 
                 << endl; 
 
            break; 
          default: 
            cout << "Enter valid input:" << endl; 
            break; 
          } 
        } 
      }; 
    } 
  } 
  return 0; 
}
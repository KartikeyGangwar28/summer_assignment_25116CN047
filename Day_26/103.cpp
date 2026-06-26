#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class  Customer
{ private:
    int accNo;
    string name;
    int deposit;
    int withdraw;
    int balance;
    int pin;
    public: 
    void takeInput(){
        cout<<"ENTER YOUR NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER YOUR ACCOUNT NUMBER: ";
        cin>>accNo;
        cout<<"ENTER YOUR ATM PIN: ";
        cin>>pin;
        cout<<"ENTER YOUR PRIOR BALANCE: ";
        cin>>balance;
        cout<<"ENTER THE AMOUNT U WISH TO DEPOSIT: ";
        cin>>deposit;
        cout<<"ENTER THE AMOUNT U WISH TO withdraw: ";
        cin>>withdraw;
}
public:
void displayInfo(){
    cout<<"NAME OF THE ACCOUNT HOLDER: "<<name;
    cout<<endl;
    cout<<"ACCOUNT NUMBER: "<<accNo<<endl;
    cout<<"Amount Deposited: "<<deposit<<endl;
    cout<<"Withdrawal amount: "<<withdraw<<endl;
    if(balance-withdraw<0){
        cout<<"INSUFFICIENT FUNDS IN YOUR ACCOUNT";
        return;
    }
    cout<<"Available Balance: "<<balance+deposit-withdraw<<endl;
    cout<<"THANK YOU FOR VISITING OUR XYZ BANK OF UGANDA"<<endl;
    
}
   
};


int main(){
   Customer c[1];
   for(int i=0;i<1;i++){
        cout<<"CUSTOMER "<<i+1<<endl;
         c[i].takeInput();
   }
   for(int i=0;i<1;i++){
    cout<<"**************INFO OF CUSTOMER "<<i+1<<endl<<"***************";
    c[i].displayInfo();
    cout<<endl;
   }
   
   
}
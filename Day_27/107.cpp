#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Account{
private:
    long long accountNo;
    string name;
    int age;
    string phone;
    string accountType;
    double balance;
public:
    void createAccount(){
        cout<<"ENTER ACCOUNT NUMBER: ";
        cin>>accountNo;
        cout<<"ENTER CUSTOMER NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER AGE: ";
        cin>>age;
        cout<<"ENTER PHONE NUMBER: ";
        cin>>phone;
        cout<<"ENTER ACCOUNT TYPE: ";
        getline(cin>>ws,accountType);
        cout<<"ENTER INITIAL BALANCE: ";
        cin>>balance;
    }
long long getAccountNo(){
        return accountNo;
    }
string getName(){
        return name;
    }
void displayAccount(){
        cout<<"\n******** ACCOUNT DETAILS ********\n";
        cout<<"ACCOUNT NUMBER: "<<accountNo<<endl;
        cout<<"NAME:           "<<name<<endl;
        cout<<"AGE:            "<<age<<endl;
        cout<<"PHONE:          "<<phone<<endl;
        cout<<"ACCOUNT TYPE:   "<<accountType<<endl;
        cout<<"BALANCE:        "<<balance<<endl;
        cout<<"\n******** ACCOUNT DETAILS ********\n";
    }

 void deposit(){
        double amount;
        cout<<"ENTER AMOUNT U WANT TO DEPOSIT: ";
        cin>>amount;
        balance += amount;
        cout<<"MONEY DEPOSITED SUCCESSFULLY\n";
        cout<<"UPDATED BALANCE: "<<balance<<endl;
    }

void withdraw(){
        double amount;
        cout<<"ENTER AMOUNT U WANT TO WITHDRAW: ";
        cin>>amount;
        if(amount>balance){
            cout<<"INSUFFICIENT BALANCE--CAN'T WITHDRAW AMOUND GREATER THAN ACCOUNT BALANCE\n";
            return;
        }
        balance -= amount;
        cout<<"MONEY WITHDRAWN SUCCESSFULLY\n";
        cout<<"BALANCE: "<<balance;
    }
void checkBalance(){
        cout<<"CURRENT BALANCE: "<<balance<<endl;
    }
 void updateDetails(){
        cout<<"ENTER NEW NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER NEW PHONE NUMBER: ";
        cin>>phone;
        cout<<"YOUR DETAILS ARE UPDATED\n";
    }

};
int main(){
  int n;
cout<<"ENTER NUMBER OF ACCOUNTS U WANT TO perform opeartions for: ";
cin>>n;
vector<Account>accounts(n);
for(int i=0;i<n;i++){
        cout<<"\nCREATE ACCOUNT "<<i+1<<endl;
        accounts[i].createAccount();
    }
 int choice;
do{     cout<<"\n1. Display All Accounts";
        cout<<"\n2. Search Account";
        cout<<"\n3. Deposit Money";
        cout<<"\n4. Withdraw Money";
        cout<<"\n5. Check Balance";
        cout<<"\n6. Update Details";
        cout<<"\n7.Delete your Account";
        cout<<"\n8. Exit";
        cout<<"\nENTER CHOICE: ";
        cin>>choice;
 if(choice==1){
  for(auto &acc:accounts){
                acc.displayAccount();
            }
        }
 else if(choice==2){
     long long search;
            cout<<"ENTER ACCOUNT NUMBER: ";
            cin>>search;
            bool found=false;
            for(auto &acc:accounts){
                if(acc.getAccountNo()==search){
                    acc.displayAccount();
                    found=true;
                    break;
                }

            }

            if(!found)
                cout<<"ACCOUNT NOT FOUND\n";

        }
else if(choice==3){
long long accNo;
    cout<<"ENTER ACCOUNT NUMBER: ";
            cin>>accNo;
               for(auto &acc:accounts){

                if(acc.getAccountNo()==accNo){
                    acc.deposit();
                }

            }

        }
        else if(choice==4){

            long long accNo;
            cout<<"ENTER ACCOUNT NUMBER: ";
            cin>>accNo;

            for(auto &acc:accounts){

                if(acc.getAccountNo()==accNo){
                    acc.withdraw();
                }

            }

        }


        else if(choice==5){

            long long accNo;
            cout<<"ENTER ACCOUNT NUMBER: ";
            cin>>accNo;

            for(auto &acc:accounts){

                if(acc.getAccountNo()==accNo){
                    acc.checkBalance();
                }

            }

        }


        else if(choice==6){

            long long accNo;
            cout<<"ENTER ACCOUNT NUMBER: ";
            cin>>accNo;

            for(auto &acc:accounts){

                if(acc.getAccountNo()==accNo){
                    acc.updateDetails();
                }

            }

        }
       else if(choice==7){
        long long accNo;
        cout<<"ENTER ACCOUNT NUMBER: ";
        cin>>accNo;
        bool flag=false;
        for(auto it=accounts.begin();it!=accounts.end();it++){if(it->getAccountNo()==accNo){
            accounts.erase(it);
            cout<<"ACCOUND DELETED SUCCESSFULLY"<<endl;
            flag=true;
            break;
        }

        }
        if(!flag){
            cout<<"INVALID ACCOUNT NUMBER";
        }
       }

    }while(choice!=8);
   cout<<"THANK YOU FOR USING THIS BANK MANAGEMENT SYSTEM"<<endl;

    return 0;
}
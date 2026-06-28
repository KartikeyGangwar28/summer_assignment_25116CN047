#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Contact{
private:
    string name;
    string phone;
    string email;
public:
    void addContact(){
        cout<<"ENTER NAME:         ";
        getline(cin>>ws,name);
        cout<<"ENTER PHONE NUMBER: ";
        getline(cin>>ws,phone);
        cout<<"ENTER EMAIL:        ";
        getline(cin>>ws,email);
        cout<<"CONTACT ADDED SUCCESSFULLY\n";
    }
    string getPhone(){
        return phone;
    }
    void displayContact(){
        cout<<"******** CONTACT DETAILS ********\n";
        cout<<"NAME: "<<name<<endl;
        cout<<"PHONE: "<<phone<<endl;
        cout<<"EMAIL: "<<email<<endl;
        cout<<"*********************************\n";
    }
    void updateContact(){
        cout<<"ENTER NEW NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER NEW PHONE NUMBER: ";
        getline(cin>>ws,phone);
        cout<<"ENTER NEW EMAIL: ";
        getline(cin>>ws,email);
        cout<<"CONTACT UPDATED SUCCESSFULLY\n";
    }
};
int main(){
    vector<Contact>contacts;
    int choice;
    do{
        cout<<"\n******** CONTACT MANAGEMENT SYSTEM ********\n";
        cout<<"1.ADD CONTACT\n";
        cout<<"2.DISPLAY ALL CONTACTS\n";
        cout<<"3.SEARCH CONTACT\n";
        cout<<"4.UPDATE CONTACT\n";
        cout<<"5.DELETE CONTACT\n";
        cout<<"6.EXIT\n";
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        if(choice==1){
            Contact c;
            c.addContact();
            contacts.push_back(c);
        }
        else if(choice==2){
            for(auto &c:contacts){
                c.displayContact();
            }
        }
        else if(choice==3){
            string phone;
            cout<<"ENTER PHONE NUMBER TO SEARCH: ";
            cin>>phone;
            bool found=false;
            for(auto &c:contacts){
                if(c.getPhone()==phone){
                    c.displayContact();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"CONTACT NOT FOUND\n";
            }
        }
        else if(choice==4){
            string phone;
            cout<<"ENTER PHONE NUMBER TO UPDATE CONTACT: ";
            cin>>phone;
            bool found=false;
            for(auto &c:contacts){
                if(c.getPhone()==phone){
                    c.updateContact();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"CONTACT NOT FOUND\n";
            }
        }
        else if(choice==5){
            string phone;
            cout<<"ENTER PHONE NUMBER TO DELETE CONTACT: ";
            cin>>phone;
            bool found=false;
            for(auto it=contacts.begin();it!=contacts.end();it++){
                if(it->getPhone()==phone){
                    contacts.erase(it);
                    cout<<"CONTACT DELETED SUCCESSFULLY\n";
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"CONTACT NOT FOUND\n";
            }
        }
    }while(choice!=6);
    cout<<"THANKS FOR USING THIS CONTACT MANAGEMENT SYSTEM";
}
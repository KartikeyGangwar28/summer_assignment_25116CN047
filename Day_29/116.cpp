#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Product{
private:
    int id;
    string name;
    int quantity;
    int price;
public:
    void addProduct(){
        cout<<"ENTER PRODUCT ID: ";
        cin>>id;
        cout<<"ENTER PRODUCT NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER QUANTITY: ";
        cin>>quantity;
        cout<<"ENTER PRICE: ";
        cin>>price;
        cout<<"PRODUCT ADDED SUCCESSFULLY\n";
    }
    int getId(){
        return id;
    }
    void display(){
        cout<<"******** PRODUCT DETAILS ********\n";
        cout<<"ID: "<<id<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"QUANTITY: "<<quantity<<endl;
        cout<<"PRICE: "<<price<<endl;
        cout<<"*********************************\n";
    }
    void update(){
        cout<<"ENTER NEW QUANTITY: ";
        cin>>quantity;
        cout<<"ENTER NEW PRICE: ";
        cin>>price;
        cout<<"PRODUCT UPDATED SUCCESSFULLY\n";
    }
};

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF PRODUCTS U WANT TO ADD IN INVENTORY: ";
    cin>>n;
    vector<Product>inventory(n);
    for(int i=0;i<n;i++){
        inventory[i].addProduct();
    }
    int choice;

    do{
        cout<<"\n******** INVENTORY MANAGEMENT SYSTEM ********\n";
        cout<<"1.ADD PRODUCT\n";
        cout<<"2.DISPLAY ALL PRODUCTS\n";
        cout<<"3.SEARCH PRODUCT\n";
        cout<<"4.UPDATE PRODUCT\n";
        cout<<"5.REMOVE PRODUCT\n";
        cout<<"6.EXIT\n";
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;

        if(choice==1){
            Product p;
            p.addProduct();
            inventory.push_back(p);
        }
        else if(choice==2){
            for(auto &p:inventory){
                p.display();
            }
        }
        else if(choice==3){
            int id;
            cout<<"ENTER PRODUCT ID: ";
            cin>>id;
            bool found=false;
            for(auto &p:inventory){
                if(p.getId()==id){
                    p.display();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"PRODUCT NOT FOUND\n";
            }
        }
        else if(choice==4){
            int id;
            cout<<"ENTER PRODUCT ID TO UPDATE: ";
            cin>>id;
            bool found=false;
            for(auto &p:inventory){
                if(p.getId()==id){
                    p.update();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"PRODUCT NOT FOUND\n";
            }
        }
        else if(choice==5){
            int id;
            cout<<"ENTER PRODUCT ID TO REMOVE: ";
            cin>>id;
            bool found=false;
            for(auto it=inventory.begin();it!=inventory.end();it++){
                if(it->getId()==id){
                    inventory.erase(it);
                    cout<<"PRODUCT REMOVED SUCCESSFULLY\n";
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"PRODUCT NOT FOUND\n";
            }
        }

    }while(choice!=6);

    cout<<"SYSTEM CLOSED\n";
}
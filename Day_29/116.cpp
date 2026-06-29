#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Product{
private:
int id;
string name;
string category;
string supplier;
int quantity;
int price;
float discount;
public:
void addProduct(){
    cout<<"ENTER PRODUCT ID:    ";
    cin>>id;
    cout<<"ENTER PRODUCT NAME:  ";
    getline(cin>>ws,name);
    cout<<"ENTER CATEGORY:      ";
    getline(cin>>ws,category);
    cout<<"ENTER SUPPLIER NAME: ";
    getline(cin>>ws,supplier);
    cout<<"ENTER QUANTITY:      ";
    cin>>quantity;
    cout<<"ENTER PRICE:         ";
    cin>>price;
    cout<<"ENTER DISCOUNT (%):  ";
    cin>>discount;
    cout<<"PRODUCT ADDED SUCCESSFULLY\n";
}
int getId(){
    return id;
}
int getQuantity(){
    return quantity;
}
string getCategory(){
    return category;
}
float finalPrice(){
    return price-(price*discount/100);
}
int getValue(){
    return quantity*finalPrice();
}
void display(){
    cout<<"\n******** PRODUCT DETAILS ********";
    cout<<"\nID:                 "<<id;
    cout<<"\nNAME:               "<<name;
    cout<<"\nCATEGORY:           "<<category;
    cout<<"\nSUPPLIER:           "<<supplier;
    cout<<"\nQUANTITY:           "<<quantity;
    cout<<"\nPRICE:              "<<price;
    cout<<"\nDISCOUNT:           "<<discount<<"%";
    cout<<"\nFINAL PRICE:        "<<finalPrice();
    cout<<"\nTOTAL STOCK VALUE:  "<<quantity*finalPrice();
    cout<<"\n********************************\n";
}
void update(){
    cout<<"ENTER NEW QUANTITY:  ";
    cin>>quantity;
    cout<<"ENTER NEW PRICE:     ";
    cin>>price;
    cout<<"ENTER NEW DISCOUNT:  ";
    cin>>discount;
    cout<<"PRODUCT UPDATED\n";
}
void sellProduct(){
    int q;
    cout<<"ENTER QUANTITY TO SELL: ";
    cin>>q;
    if(q<=quantity){
        quantity-=q;
        cout<<"TOTAL BILL: "<<q*finalPrice()<<endl;
        cout<<"PRODUCT SOLD SUCCESSFULLY\n";
    }
    else{
        cout<<"INSUFFICIENT STOCK\n";
    }
}

void restock(){
    int q;
    cout<<"ENTER QUANTITY TO ADD: ";
    cin>>q;
    quantity+=q;
    cout<<"STOCK UPDATED\n";
}
};
int main(){
    int n;
    cout<<"ENTER THE INITIAL ITEMS IN INVENTORY: ";
    cin>>n;
vector<Product>inventory;
inventory.resize(n);
for(int i=0;i<n;i++){
    inventory[i].addProduct();
}
int choice;
do{
    cout<<"\n******** INVENTORY MANAGEMENT SYSTEM ********";
    cout<<"\n1.ADD PRODUCT";
    cout<<"\n2.DISPLAY ALL PRODUCTS";
    cout<<"\n3.SEARCH PRODUCT";
    cout<<"\n4.UPDATE PRODUCT";
    cout<<"\n5.REMOVE PRODUCT";
    cout<<"\n6.SELL PRODUCT";
    cout<<"\n7.RESTOCK PRODUCT";
    cout<<"\n8.LOW STOCK PRODUCTS";
    cout<<"\n9.TOTAL INVENTORY VALUE";
    cout<<"\n10.SEARCH BY CATEGORY";
    cout<<"\n11.TOTAL PRODUCTS";
    cout<<"\n12.EXIT";

cout<<"\nENTER UR CHOICE: ";
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
        cout<<"PRODUCT NOT FOUND";
    }
}
else if(choice==4){
    int id;
    cout<<"ENTER PRODUCT ID: ";
    cin>>id;
    for(auto &p:inventory){
        if(p.getId()==id){
         p.update();
            break;
        }
    }
}
else if(choice==5){
    int id;
    cout<<"ENTER PRODUCT ID: ";
    cin>>id;
    for(auto it=inventory.begin();it!=inventory.end();it++){
        if(it->getId()==id){
            inventory.erase(it);
            cout<<"PRODUCT REMOVED\n";
            break;
        }
    }
}
else if(choice==6){
    int id;
    cout<<"ENTER PRODUCT ID: ";
    cin>>id;
    for(auto &p:inventory){
        if(p.getId()==id){
            p.sellProduct();
            break;
        }
    }
}
else if(choice==7){
    int id;
    cout<<"ENTER PRODUCT ID: ";
    cin>>id;
    for(auto &p:inventory){
        if(p.getId()==id){
            p.restock();
            break;
        }
    }
}
else if(choice==8){
    cout<<"LOW STOCK PRODUCTS:\n";
    for(auto &p:inventory){
        if(p.getQuantity()<5){
            p.display();
        }
    }
}
else if(choice==9){
    int total=0;
    for(auto &p:inventory){
        total+=p.getValue();
    }
    cout<<"TOTAL INVENTORY VALUE: "<<total;
}
else if(choice==10){
    string category;
    cout<<"ENTER CATEGORY: ";
    getline(cin>>ws,category);
    bool found=false;
    for(auto &p:inventory){
        if(p.getCategory()==category){
            p.display();
            found=true;
        }
    }
    if(!found){
        cout<<"NO PRODUCT FOUND";
    }
}
else if(choice==11){
    cout<<"TOTAL PRODUCTS IN INVENTORY: "<<inventory.size();
}
}while(choice!=12);
cout<<"\nTHANKS FOR USING THIS INVENTORY MANAGEMENT SYSTME";

}

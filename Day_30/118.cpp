#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Library{
private:
string author;
string title;
int id;
string borrower;
bool issued;
int days;
public:
Library(){
    issued=false;
    days=0;
}
void takeInfo(){
    cout<<"ENTER THE BOOK TITLE: ";
    getline(cin>>ws,title);
    cout<<"ENTER THE author's name: ";
    getline(cin>>ws,author);
    cout<<"ENTER THE UNIQUE IDETIFICATION SEQUEL NUMBER: ";
    cin>>id;
}
int getId(){
    return id;
}
void displayInfo(){
    cout<<"***********************WELCOME TO WXYZ LIBRARY***********************"<<endl;
    cout<<"BOOK TITLE:         "<<title<<endl;
    cout<<"AUTHOR:             "<<author<<endl;
    cout<<"ID:                 "<<id<<endl;
    if(issued){
        cout<<"STATUS:             ISSUED"<<endl;
        cout<<"BORROWER:           "<<borrower<<endl;
    }
    else{
        cout<<"STATUS:             AVAILABLE"<<endl;
    }
    cout<<"****************************************************\n";
}
void updateInfo(){
    cout<<"ENTER THE BOOK TITLE: ";
    getline(cin>>ws,title);
    cout<<"ENTER THE author's name: ";
    getline(cin>>ws,author);
    cout<<"ENTER THE NEW UNIQUE IDETIFICATION SEQUEL NUMBER: ";
    cin>>id;
    cout<<"BOOK RECORD UPDATED SUCCESFULLY\n";
}
void IssueBook(){
    if(issued){
        cout<<"BOOK IS ALREADY ISSUED\n";
        return;
    }
    cout<<"BOOK NAME: "<<title<<endl;
    cout<<"AUTHOR: "<<author<<endl;
    cout<<"COST PER DAY: $1"<<endl;
    cout<<"ENTER YOUR NAME: ";
    getline(cin>>ws,borrower);
    cout<<"ENTER THE NUMBER OF DAYS U WANT TO BORROW THIS BOOK FOR: ";
    cin>>days;
    issued=true;
    cout<<"BOOK ISSUED SUCCESSFULLY\n";
    cout<<"TOTAL BILL: $"<<days*1<<endl;
    cout<<"THANKS FOR VISITNG OUR LIBRARY"<<endl;
}
void ReturnBook(){
    if(!issued){
        cout<<"BOOK IS ALREADY AVAILABLE\n";
        return;
    }
    int returnDays;
    cout<<"ENTER NUMBER OF DAYS YOU KEPT THIS BOOK: ";
    cin>>returnDays;
    if(returnDays>days){
        int fine=(returnDays-days)*5;
        cout<<"LATE RETURN FINE: $"<<fine<<endl;
    }
    else{
        cout<<"NO FINE\n";
    }
    issued=false;
    borrower="";
    days=0;
    cout<<"BOOK RETURNED SUCCESSFULLY\n";
}
};

int main(){
int n;
cout<<"ENTER THE TOTAL BOOKS U WANT TO MANAGE IN YOUR LIBRARY MANAGEMENT SYSTEM: ";
cin>>n;
vector<Library>lib(n);
for(int i=0;i<n;i++){
    cout<<"ENTER THE FOLLOWING DEATAILS FOR BOOK "<<i+1<<" : "<<endl;
    lib[i].takeInfo();
}
int choice;
do{
    cout<<"OPERATIONS MENU\n";
    cout<<"SELECT FROM THE FOLLOWING OPTIONS: "<<endl;
    cout<<"1.SEARCH FOR A BOOK\n";
    cout<<"2.Add a new Book\n";
    cout<<"3.Remove a Book\n";
    cout<<"4.Update BOOK info\n";
    cout<<"5.DISPLAY ALL BOOKS\n";
    cout<<"6.ISSUE A BOOK\n";
    cout<<"7.RETURN A BOOK\n";
    cout<<"8.EXIT\n";
    cout<<"ENTER YOUR CHOICE: ";
    cin>>choice;
    if(choice==1){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT: ";
        cin>>id;
        bool found=false;
        for(auto &it:lib){
            if(it.getId()==id){
                it.displayInfo();
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"NO BOOK EXISTS WITH THIS ID";
        }
    }
    else if(choice==2){
        Library newBook;
        newBook.takeInfo();
        lib.push_back(newBook);
        cout<<"BOOK ADDED SUCESSFULLY";
    }
    else if(choice==3){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT TO REMOVE: ";
        cin>>id;
        bool found=false;
        for(auto it=lib.begin();it!=lib.end();it++){
            if(it->getId()==id){
                found=true;
                lib.erase(it);
                cout<<"BOOK REMOVED SUCCESFULLY";
                break;
            }
        }
        if(!found){
            cout<<"NO BOOK EXISTS WITH THIS ID";
        }
    }
    else if(choice==4){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT TO update data for: ";
        cin>>id;
        bool found=false;
        for(auto &it:lib){
            if(it.getId()==id){
                found=true;
                it.updateInfo();
                break;
            }
        }
        if(!found){
            cout<<"NO BOOK EXISTS WITH THIS ID";
        }
    }
    else if(choice==5){
        cout<<"BOOKS DISPLAY:\n";
        for(auto &it:lib){
            it.displayInfo();
        }
    }
    else if(choice==6){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT TO borrow: ";
        cin>>id;
        bool found=false;
        for(auto &it:lib){
            if(it.getId()==id){
                found=true;
                it.IssueBook();
                break;
            }
        }
        if(!found){
            cout<<"NO BOOK EXISTS WITH THIS ID";
        }
    }
    else if(choice==7){
        int id;
        cout<<"ENTER THE BOOK ID TO RETURN: ";
        cin>>id;
        bool found=false;
        for(auto &it:lib){
            if(it.getId()==id){
                found=true;
                it.ReturnBook();
                break;
            }
        }
        if(!found){
            cout<<"NO BOOK EXISTS WITH THIS ID";
        }
    }
}while(choice!=8);
cout<<"THANKS FOR USING THIS LIBRARY MANAGEMENT SYSTEM\n";
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// class Library{
//     public:
// int totalBooks;
//  vector<pair<string,string>>books;
// public:
// void takeInfo(){
//     cout<<"ENTER THE TOTAL NUMBER OF BOOKS IN LIBRARY: ";
//     cin>>totalBooks;
//    for(int i=0;i<totalBooks;i++){
//         string name;
//         string author;
//         cout<<"ENTER THE NAME OF BOOK "<<i+1<<" : ";
//         getline(cin>>ws,name);
//         cout<<"ENTER THE AUTHOR'S Name: ";
//         getline(cin>>ws,author);
//         books.push_back({name,author});
//          }
// }
// void displayBooks(){
//     cout<<"*******************WELCOME TO XYZ LIBRARY*******************\n";
//     cout<<"TOTAL BOOKS IN LIBRARY:        "<<totalBooks<<endl;
//     cout<<"BOOK NAME\t\t\t\t\t AUTHOR'S NAME"<<endl;
//     for(auto &it:books){
//         cout<<it.first<<"\t\t\t\t\t "<<it.second;
//         cout<<endl;
//     }
// }

// };
class Library{
    private:
   string author;
   string title;
   int id;
   string borrower;
   public: 
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
       cout<<"BOOK NAME: "<<title;
       cout<<"AUTHOR:     "<<author;
       cout<<"COST PER DAY: "<<"$1";
       cout<<"ENTER YOUR NAME: ";
       getline(cin>>ws,borrower);
       int num;
       cout<<"ENTER THE NUMBER OF DAYS U WANT TO BORROW THIS BOOK FOR: ";cin>>num;
       cout<<"TOTAL BILL: $"<<num*1<<endl;
       cout<<"THANKS FOR VISITNG OUR LIBRARY"<<endl;
       
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
    for(int i=0;i<n;i++){
        lib[i].displayInfo();
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
        cout<<"7.EXIT";
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
      if(choice==1){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT: ";
        cin>>id;
        bool found=false;
        for(auto &it:lib){
            
            if (it.getId()==id)
            {
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
                cout<<"UPDATED LIBRARY: \n";
                for(auto &it:lib){
                    it.displayInfo();
                }
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
        for(auto&it:lib){
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
        for(int i=0;i<lib.size();i++){
            lib[i].displayInfo();
        }
      }
      else if(choice==6){
        int id;
        cout<<"ENTER THE BOOK ID YOU WANT TO borrow: ";
        cin>>id;
        bool found=false;
        for(auto&it:lib){
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
    } while (choice!=7);
    
    
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Voter{
    private:
    string name;
    int age;
    long long voterId;
    string nationality;
    public:
    void takeInput(){
        cout<<"ENTER ALL THE INFORMATION IN CAPITAL LETTERS"<<endl;
        cout<<"ENTER YOUR NAME: ";
           getline(cin>>ws,name);
           cout<<"ENTER YOUR AGE: ";
           cin>>age;
           cout<<"ENTER YOUR voter ID: ";
           cin>>voterId;
           cout<<"enter your nationality: ";
           getline(cin>>ws,nationality);
    } 
     bool checkEligibility(){
          if(age<18||nationality!="INDIAN"){
            return false;
          }
          return true;

   }

   void DisplayRESULT(){
    cout<<"**********VOTER ELIGIBILITY SYSTEM**********\n";
    cout<<"NAME: "<<name<<endl;
    cout<<"AGE: "<<age<<endl;
    cout<<"VOTER ID: "<<voterId<<endl;
    cout<<"NATIONALITY: "<<nationality<<endl;
    if(!checkEligibility()){
        cout<<"STATUS:INELEIGIBILE TO VOTE"<<endl;
        return;
    }
    cout<<"STATUS:VOTER IS ELIGIBILE TO VOTE"<<endl;
   }
};
//VOTER ELIGIBILITY SYSTEM;
int main(){
    int n;
    cout<<"ENTER THE NUMBERS OF VOTERS FOR WHOM U WANT TO CHECK ELIGIBILITY STATUS: ";
    cin>>n;
   Voter v[n];
   for(int i=0;i<n;i++){
    cout<<"ENTER THE INFORMATION FOR VOTER "<<i+1<<endl;
         v[i].takeInput();
   }
   for(int i=0;i<n;i++){
    cout<<"VOTER "<<i+1<<" : "<<endl;
   v[i].DisplayRESULT();
   }
}
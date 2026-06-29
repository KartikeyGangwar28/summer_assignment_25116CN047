#include<iostream>
#include<string>
using namespace std;
class StringOperation{
private:
    string s;
public:
    void input(){
        cout<<"ENTER THE STRING: ";
        getline(cin>>ws,s);
    }
    void display(){
        cout<<"STRING: "<<s<<endl;
    }
    void reverseString(){
        string temp=s;
        reverse(temp.begin(),temp.end());
        cout<<"REVERSED STRING: "<<temp<<endl;
    }
    void length(){
        cout<<"LENGTH: "<<s.size()<<endl;
    }
    void concatenate(){
        string sS;
        cout<<"ENTER  THE 2 STRINGS U WANT TO CONCATENATE: ";
        getline(cin>>ws,sS);
        s+=sS;
        cout<<"UPDATED STRING: "<<s<<endl;
    }
};

int main(){
    StringOperation s;
    int choice;
    s.input();
    do{
        cout<<"\n1.DISPLAY STRING\n";
        cout<<"2.REVERSE STRING\n";
        cout<<"3.FIND LENGTH\n";
        cout<<"4.CONCATENATE STRING\n";
        cout<<"5.EXIT\n";
        cout<<"ENTER CHOICE: ";
        cin>>choice;
        if(choice==1){
            s.display();
        }
        else if(choice==2){
            s.reverseString();
        }
        else if(choice==3){
            s.length();
        }
        else if(choice==4){
            s.concatenate();
        }
    }while(choice!=5);
    cout<<"*****END OF OPEARATIONS******"<<endl;
}
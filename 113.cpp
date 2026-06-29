#include <iostream>
using namespace std;
class Calculator{
private:
int a;
int b;
public:
void takeInput(){
    cout<<"ENTER THE FIRST OPERAND: ";
    cin>>a;
    cout<<"ENTER THE SECOND OPERAND: ";
    cin>>b;
}
void add(){
    cout<<"SUM OF"<<a<<" & "<<b<<" is: "<<a+b;
    cout<<endl;
}
void subtract(){
    cout<<"SUBTRACTION OF"<<a<<" & "<<b<<" is: "<<a-b;
     cout<<endl;
}
void mul(){
    cout<<"PRODUCT OF"<<a<<" & "<<b<<" is: "<<a*b;
     cout<<endl;
}
void div(){
    cout<<"DIVISION OF"<<a<<" & "<<b<<" is: "<<a/b;
     cout<<endl;
}
void mod(){
    cout<<"Mod OF"<<a<<" & "<<b<<" is: "<<a%b;
     cout<<endl;
}
};
int main(){
    cout<<"******** CALCULATOR ********\n";
    int operation;
    Calculator c;
    do{
        cout<<"SELECT ANY OPTION: "<<endl;
        cout<<"1.ADDITION"<<endl;
        cout<<"2.Subtraction\n";
        cout<<"3.MULTIPLICATION"<<endl;
        cout<<"4.DIVISION"<<endl;
        cout<<"5.MODULUS"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"ENTER YOUR CHOICE: ";
        cin>>operation;
        if(operation==1){
            c.takeInput();
            c.add();
        }
        else if(operation==2){
            c.takeInput();
            c.subtract();
        }
        else if(operation==3){
            c.takeInput();
            c.mul();
        }
        else if(operation==4){
            c.takeInput();
            c.div();
        }
        else if(operation==5){
            c.takeInput();
            c.mod();
        }
    }while(operation!=6);
    cout<<"END OF OPERATIONS\n";
}
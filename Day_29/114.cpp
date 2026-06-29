#include<iostream>
#include<vector>
using namespace std;

class ArrayOperation{
private:
    vector<int>arr;
public:
    void input(){
        int n;
        cout<<"ENTER SIZE OF ARRAY: ";
        cin>>n;
        arr.resize(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void display(){
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void insert(){
        int posi,ele;
        cout<<"ENTER POSITION AT WHICH U WANT TO INSERT THE NEW ELEMENT: ";
        cin>>posi;
        cout<<"ENTER THE VALUE OF ELEMENT: ";
        cin>>ele;
        arr.insert(arr.begin()+posi,ele);
    }
    void remove(){
        int posi;
        cout<<"ENTER POSITION OF THE ELEMENT WHICH U WANT TO DELETE: ";
        cin>>posi;
        arr.erase(arr.begin()+posi);
    }
    void search(){
        int val;
        cout<<"ENTER THE ELEMENT VALUE U WANT TO SEARCH: ";
        cin>>val;
        bool found=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==val){
                cout<<"ELEMENT FOUND AT INDEX "<<i<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"ELEMENT NOT FOUND\n";
        }
    }
};

int main(){
    ArrayOperation a;
    int choice;
    a.input();
    do{
        cout<<"\n1.DISPLAY ARRAY\n";
        cout<<"2.INSERT ELEMENT\n";
        cout<<"3.DELETE ELEMENT\n";
        cout<<"4.SEARCH ELEMENT\n";
        cout<<"5.EXIT\n";
        cout<<"ENTER CHOICE: ";
        cin>>choice;
        if(choice==1){
            a.display();
        }
        else if(choice==2){
            a.insert();
        }
        else if(choice==3){
            a.remove();
        }
        else if(choice==4){
            a.search();
        }
    }while(choice!=5);
    cout<<"END OF OPERATIONS\n";
}
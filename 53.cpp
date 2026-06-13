#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int ele){
    int loc=-1;
for(int i=0;i<n;i++){
    if(arr[i]==ele){
        loc=i;
        break;
    }
}
return loc;
}
int main(){
int n;
cout<<"ENTER THE NUMBER OF ELEMETNS IS ARRAY: ";
cin>>n;
if(n<=0){
    cout<<"INVALID ARRAY SIZE";
    return 0;
}
int arr[100];
cout<<"ENTER THE ELEMENTS: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ele;
cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH: ";
cin>>ele;
int loc=linearSearch(arr,n,ele);
if(loc==-1){
    cout<<"TARGET ELEMENT DOES NOT EXIST IN ARRAY";
}
else{
cout<<"INDEX OF TARGET ELEMENT IN ARRAY IS : "<<loc;
}

}
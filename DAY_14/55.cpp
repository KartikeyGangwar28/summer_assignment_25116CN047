#include <iostream>
         
using namespace std;
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
int largest=arr[0],secondLargest=arr[1];
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
//cout<<largest;
for(int i=0;i<n;i++){
    if(arr[i]<largest&&arr[i]>secondLargest){
        secondLargest=arr[i];
    }
}
 cout<<"\nSECOND LARGEST ELEMENT IS: "<<secondLargest;
}

#include <iostream>
using namespace std;
void sortInDescendingOrder(int arr[],int n){
int temp=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]<arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
        }
    }
}
}
int main(){
    int n;
   cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
    cin>>n;
    if(n<=0){
        cout<<"INVALID ARRAY SIZE";
        return 0;
    }

    int arr[100];
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++)
    { std::cin>>arr[i];}
    if(n==1){
        cout<<"ONLY ONE ELEMENT IN ARRAY: "<<arr[0];
        return 1;

    }
    sortInDescendingOrder(arr,n);
    cout<<"Sorted in descending order: ";
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
 return 0;   
}
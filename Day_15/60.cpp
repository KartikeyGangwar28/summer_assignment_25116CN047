#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE ARRAY SIZE: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid array size";
        return 0;
    }
    int arr[100]; 
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int temp=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
        if(arr[j]==0){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            
        }
        
    }
    }
    cout<<"after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
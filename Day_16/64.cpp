#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid array size";
        return 0;
    }
   int arr[100];
  // vector<int>arr(n);
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
               temp=arr[k];
               arr[k]=arr[k+1];
               arr[k+1]=temp;
                
                }
                j--;
                n--;
    }
    
            }
        }
        
              
    cout<<"AFTER REMOVING DUPLICATES: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

#include <iostream>
#include <utility>
using namespace std;
pair<int,int>findPair(int k,int arr[],int n){
    int c=-1;
    int d=-1;
    for(int i=0;i<n;i++){
            for(int j=n-1;j>=i+1;j--){
              if(arr[i]+arr[j]==k){
                      c=i;
                      d=j;
                      return {c,d};
                     
              }
              
            }
    }
     return {c,d};
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid array size";
        return 0;
    }
    int arr[100];
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"ENTER THE TARGETED SUM: ";
    cin>>k;
    pair<int,int>result=findPair(k,arr,n);
    if(result.first==-1||result.second==-1){
        cout<<"NO PAIR EXISTS";
        return 0;
    }
    cout<<"First integer is at index: "<<result.first<<" i.e. "<<arr[result.first]<<endl<<"Second integer is at index: "<<result.second<<" i.e. "<<arr[result.second];
}
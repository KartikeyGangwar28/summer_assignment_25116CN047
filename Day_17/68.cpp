#include <iostream>
//IT WAS ONLY MENTIONED TO FIND COMMON ELEMENTS IN ARRAY THUS I AM USING SET DATA STRUCTURE;
#include <set>
using namespace std;
int main(){
    int n,n2;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
    cin>>n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY in second array: ";
    cin>>n2;
    if(n<=0||n2<=0){
        cout<<"INVALID ARRAY SIZE";
        return 0;
    }
    int arr[100],arr2[100];
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"ENTER THE ELEMENTS for second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    set<int>common;
for(int i=0;i<n;i++){
    for(int j=0;j<n2;j++){
        if(arr[i]==arr2[j]){
    
            common.insert(arr[i]);
        }
    }
}
cout<<"COMMON ELEMENTS OF BOTH ARRAYS ARE: ";
for(auto it:common){
    cout<<it<<" ";
}
}
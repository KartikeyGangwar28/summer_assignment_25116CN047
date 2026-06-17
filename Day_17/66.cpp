#include <iostream>
//IT WAS ONLY MENTIONED TO FIND UNION OF ARRAY THUS I AM USING SET DATA STRUCTURE to store and print those common elements;
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
   common.emplace(arr[i]);
        
}
for(int i=0;i<n2;i++){
  common.emplace(arr2[i]);
}
cout<<"UNION OF BOTH ARRAYS ARE: ";
for(auto it:common){
    cout<<it<<" ";
}
}

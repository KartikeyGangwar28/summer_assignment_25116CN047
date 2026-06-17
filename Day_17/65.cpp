#include <iostream>
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
    int mergedArr[100];
    for(int i=0;i<n;i++){
            mergedArr[i]=arr[i];
    }
    int k=0;
     for(int j=n;j<n2+n;j++){
        mergedArr[j]=arr2[k];
        k+=1;
     }
     cout<<"MERGED ARRAY: ";
     for(int i=0;i<n+n2;i++){
        std::cout<<mergedArr[i]<<" ";
     }
}

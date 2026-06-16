#include <iostream>
using namespace std;
//I have solved this problem considering that the number missing is from a consecutive sequence
int findMissingNumber(int arr[],int n){
    int missing = arr[n-1]+1;
    for(int i=1;i<n;i++){
        if(arr[i-1]+1!=arr[i]){
            missing=arr[i-1]+1;
            break;
        }
    }
    return missing;
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
    int missing=findMissingNumber(arr,n);
    cout<<"missing element is : "<<missing;
}
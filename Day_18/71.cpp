#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int ele){
int low=0,high=n-1;
int mid,loc=-1;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==ele){
        loc=mid;
        return loc;
    }
    else if(arr[mid]>ele){
        high = mid-1;
    }
    else{
        low=mid+1;
    }
}
return loc;
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
    int ele;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH: ";
    cin>>ele;
    
    int loc=BinarySearch(arr,n,ele);
    if(loc==-1){
        cout<<"ELEMENT DOESN'T EXIST IN THE GIVEN ARRAY";
        return 0;
    }
    
        cout<<"ELEMENT FOUND AT index value: "<<loc;
    
}
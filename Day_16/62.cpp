#include <iostream>
using namespace std;
//element with max frequency in array;
int findMaxFrequency(int arr[],int n){
int frequency=0;
    int occurence=0;
    int element=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                frequency+=1;
        
            }
        }
        if(frequency>occurence){
            occurence=frequency;
            element=arr[i];
            frequency=0;
        }
    }
    return element;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
    cin>>n;
    int arr[100];
    if(n<=0){
        cout<<"invalid array size";
        return 0;
    }
    cout<<"ENTER THE ELEMENTS: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     if(n==1){
        cout<<"only one element: "<<arr[0];
        return 0;
    }
    
    int maxFrequencyElement=findMaxFrequency(arr,n);
    if(maxFrequencyElement==-1){
        cout<<"No element has frequency greater than 1 thus all have equal frequency";
    }
    else{
    std::cout<<"ELEMENT WITH HIGHEST FREQUENCY IS: "<<maxFrequencyElement;
}
return 0;
}

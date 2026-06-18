#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
int min=0;
    int temp=-1;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                 min=j;
                }
            }
            temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
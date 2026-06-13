#include <iostream>
int findSum(int arr[],int n){
    int sum=0;
 for(int i=0;i<n;i++){
      sum+=arr[i];
 }
 return sum;
}
int main(){
    int n;
    std::cout<<"ENTER THE ARRAY SIZE: ";
    std::cin>>n;
    if(n==0){
    std::cout<<"NO ELEMENTS IN ARRAY";
    return 0;
}
else if(n<0){
    std::cout<<"ARRAY SIZE CAN'T BE NEGATIVE";
    return 0;
}
    int arr[100];
    std::cout<<"ENTER THE ELEMENTS IN ARRAY: ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int sum = findSum(arr,n);
    std::cout<<"Sum of elements of array: "<<sum;
    double avg=(double)sum/n;
        std::cout<<"\nAvg of elements of array: "<<avg;



}
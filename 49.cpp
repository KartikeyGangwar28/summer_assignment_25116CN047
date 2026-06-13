#include <iostream>
 
 int main(){
    int n;
    std::cout<<"ENTER THE SIZE OF ARRAY: ";
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
    std::cout<<"ENTER THE ARRAY ELEMENTS: ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<"ARRAY ELEMENTS ARE: ";
     for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

} 
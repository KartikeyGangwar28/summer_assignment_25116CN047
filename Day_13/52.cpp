#include <iostream>
int main(){
int n;
std::cout<<"ENTER THE NUMBER OF ELEMETNS IS ARRAY: ";
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
std::cout<<"ENTER THE ELEMENTS: ";
for(int i=0;i<n;i++){
     std::cin>>arr[i];
}
int odd=0,even=0;
for(int i=0;i<n;i++){
  
   if(arr[i]%2==0){
        even+=1;
    }
    else{
        odd+=1;
    }
}
std::cout<<"TOTAL EVEN ELEMENTS: "<<even;
std::cout<<"\nTOTAL ODD ELEMENTS: "<<odd;


}
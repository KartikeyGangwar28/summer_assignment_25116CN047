#include <iostream>
 int main(){
         int n;
         int temp =0;
         std::cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: \n";
         std::cin>>n;
         if(n<=0){
            std::cout<<"INVALID ARRAY SIZE";
            return 0;
         }
         int arr[100];
                  std::cout<<"ENTER THE  ELEMENTS IN ARRAY: ";
         for(int i=0;i<n;i++)
         { std::cin>>arr[i];}
     
         for(int i=0;i<n/2;i++){
           
                temp=arr[i];
                arr[i]=arr[n-i-1];
                arr[n-i-1]=temp;
           
         }
         std::cout<<"REVERSED ARRAY: ";
         for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";
         }
         
} 

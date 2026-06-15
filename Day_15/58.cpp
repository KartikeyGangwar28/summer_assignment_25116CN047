#include <iostream>
int main(){
     int n;
     std::cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: " ;
    std::cin>>n;
    int arr[100];
     std::cout<<"ENTER THE ELEMENTS OF ARRAY: ";
     for(int i=0;i<n;i++)
     { std::cin>>arr[i];}
    int k;
    std::cout<<"ENTER THE ROTATION INDEX: ";
    std::cin>>k;
   if(k>n){
        k=k%n;
    }
    int temp=0;
     for(int i=0;i<k;i++){
        for(int j=0;j<n-1;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
          for(int i=0;i<n;i++)
    { std::cout<<arr[i]<<" ";}
        

    }
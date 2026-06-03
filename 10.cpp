#include <iostream>
bool isPrime(int n){
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
  int main(){
            int n;
            std::cout<<"ENTER THE RANGE IN WHICH YOU WANT TO PRINT: ";
            std::cin>>n;
            if(n<=1){
        std::cout<<" NEITHER PRIME NOR COMPOSIT IN THIS RANGE--\nINVALID RANGE";
        return 0;
    }
      for(int i=2;i<=n;i++){
        if(isPrime(i)){
            std::cout<<i<<" ";
        }
      }
        
    }
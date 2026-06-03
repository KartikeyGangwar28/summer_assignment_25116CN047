#include <iostream>
bool checkPrime(int n){
   for(int i=2;i<=n/2;i++){
         if(n%i==0){
            return false;
         }
   }
   return true;
}
int  main(){
   int n;
   std::cout<<"ENTER THE NUMBER: ";
   std::cin>>n;
   //CONSIDERING STANDARD MATHEMATICAL RULES THAT NEGTAIVE NUMBERS CAN NEITHER BE PRIME NOR COMPOSITE;
   if(n==0||n==1||n<0){
      std::cout<<n<<" is neither prime nor composite as per mathematical standards";
      return 0;
   }
    bool result = checkPrime(n);
  if(result){
   std::cout<<n<<" is a prime number";
  }
  else{
   std::cout<<n<<" is a composite number";
  }
}
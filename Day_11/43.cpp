#include <iostream>
bool checkPrime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }
  }
  return true;
}
int main(){
int n;
std::cout<<"ENTER THE NUMBER: ";
std::cin>>n;
if(n<0){
    std::cout<<"negative numbers can't be prime as per mathematical standards";
    return 0;
}
if(n==0||n==1){
    std::cout<<n<<" is neither prime nor composite";
    return 0;
}
int result = checkPrime(n);
if(result){
    std::cout<<n<<" is a prime number";
}
else{
    std::cout<<n<<" is not a prime number";
}
}

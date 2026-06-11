#include <iostream>
long long int findFactorial(int n){
  long long int factorial=1;
  if(n==0||n==1){
    return 1;
  }
  while(n!=1){
    factorial*=n;
    n-=1;
  }
  return factorial;
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER WHOSE FACTORIAL U WANT: ";
    std::cin>>n;
    if(n<0){
        std::cout<<"FACTORIAL OF NEGATIVE NUMBERS IS MATHEMATICALLY UNDEFINED";
    }
    long long int factorial=findFactorial(n);
    std::cout<<"FACTORIAL OF "<<n<<" is: "<<factorial;
}

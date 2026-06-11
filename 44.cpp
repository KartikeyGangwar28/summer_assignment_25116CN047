#include <iostream>
int findFactorial(int n){
  int factorial=1;
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
    int factorial=findFactorial(n);
    std::cout<<"FACTORIAL OF "<<n<<" is: "<<factorial;
}
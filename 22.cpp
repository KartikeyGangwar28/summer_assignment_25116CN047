#include <iostream>
#include <deque>
#include <cmath>
using namespace std;
int countDigits(int n){
int counter=0;
while(n!=0){
    n=n/10;
    counter++;
}
return counter;
}
int convertToDecimal(int n){
    int decimal=0;
    int rem=0;
    int counter = countDigits(n);
  for(int i=0;i<counter;i++){
       rem = n%10;
      decimal+=rem*(int)pow(2,i);
      n=n/10;
  }
return decimal;
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER IN Binary: ";
    std::cin>>n;
    std::cout<<"Given input in decimal is: "<<convertToDecimal(n);
}
#include <iostream>
#include <cmath>
int checkDigits(int n){
    int digits=0;
    if(n==0){
        return 1;
    }
    while(n!=0){
        digits++;
        n/=10;
    }
    return digits;
}
bool checkArmstrongNumber(int n){
  int temp = n;
  int digits=checkDigits(n);
  int rem =0;
  int powSum = 0;
   while(temp!=0){
       rem = temp%10;
       powSum+=pow(rem,digits);
       temp/=10;
   } 
   return powSum==n;

}
int main(){
  int n;
  std::cout<<"ENTER THE NUMBER: ";
  std::cin>>n;
  if(n<0){
    std::cout<<"NEGATIVE INTEGERS CAN'T BE ARMSTONG NUMBERS AS PER MATHEMATICAL STANDARDS";
    return 0;
  }
 bool result=checkArmstrongNumber(n);
 if(result){ 
  std::cout<<n<<" is a armstrong number";
}
else{
    std::cout<<n<<" is not a armstrong number";

}
}

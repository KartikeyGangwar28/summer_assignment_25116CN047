#include <iostream>
int factorial(int n){
    int fact=1;
   while(n>0){
    fact*=n;
    n--;
   }
   return fact;
}
bool checkStrongNumber(int n){
  int rem=0;
  int sum=0;
  int temp=n;
  if(n==0){
    return false;
  }
  while(temp!=0){
    rem = temp%10;
    sum+=factorial(rem);
    temp=temp/10;
  }
return sum==n;
}
int main(){
int n;
std::cout<<"ENTER THE NUMBER: ";
std::cin>>n;
if(n<0){
    std::cout<<"negative integers can't be strong numbers";
    return 0;
}
bool result = checkStrongNumber(n);
if(result){
    std::cout<<n<<" is a strong number";
}
else{
    std::cout<<n<<" is not a strong number";
}
}
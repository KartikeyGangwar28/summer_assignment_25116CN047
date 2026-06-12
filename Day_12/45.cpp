#include <iostream>
bool checkPalindrome(int n){
int rem=0;
long long int store=0;
int temp = n;
while(temp!=0){
    rem=temp%10;
    store=store*10+rem;
    temp/=10;
}
return store==n;
}
int main(){
int n;
std::cout<<"ENTER THE NUMBER: ";
std::cin>>n;
if(n<0){
    std::cout<<"NEGATIVE INTEGERS CAN'T BE PALINDROME IN NATURE AS PER MATHEMATICAL STANDARDS";
    return 0;
}
bool result = checkPalindrome(n);
if(result){
    std::cout<<n<<" is a palindrome number";
}
else{
    std::cout<<n<<" is not a palindrome number";
}
}

#include <iostream>
bool checkPalindrome(int n){
    if(n<=9&&n>=0){
        return true;
    }
    int temp=n;
    int store=0;
    int reverse=0;
    while(temp!=0){
        store=temp%10;
        reverse=reverse*10+store;
        temp=temp/10;
    }
    return reverse==n;
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER: ";
    std::cin>>n;
    if(n<0){
        std::cout<<"MATHEMATICALLY NEGATIVE NUMBERS CAN'T BE PALINDROME";
        return 0;
    }
    bool result = checkPalindrome(n);
    if(result){
         std::cout<<n<<" is Palindrome Number";
     }
    else{
    std::cout<<n<<" is not a Palindrome Number";
}
}
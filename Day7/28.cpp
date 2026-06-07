#include <iostream>
int reverseDigits(int rev,int n){
    rev=(rev*10)+(n%10);
    n=n/10;
if(n==0){
        return rev;
    }
    return reverseDigits(rev,n);

    
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER U WANT TO REVERSE: ";
    std::cin>>n;
    if(n<10&&n>-10){
        std::cout<<"REVERSE OF SINGLE DIGIT INTEGER IS INTEGER ITSELF: "<<n;
        return 0;
    }
    int reversed=reverseDigits(0,n);
    std::cout<<reversed;
}

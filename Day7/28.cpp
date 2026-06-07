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
std::cout<<reverseDigits(0,12344);
}

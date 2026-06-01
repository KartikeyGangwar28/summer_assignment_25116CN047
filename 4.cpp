#include <iostream>
int countDigits( unsigned long long int n){
    int store=0;
    if(n<=9){
        return 1;
    }
    while(n!=0){
        store++;
        n/=10;
    }
    return store;
}
int main(){
    unsigned long long int n;
    std::cin>>n;
    std::cout<<countDigits(n);
}
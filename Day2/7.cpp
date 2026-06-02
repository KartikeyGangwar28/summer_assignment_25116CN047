#include <iostream>
int findProductOfDigits(int n){
    if(n==0){
        return 0;
    }
    int rem=0;
    int products = 1;
    while(n!=0){
        rem = n%10;
        products*=rem;
        n=n/10;
    }
    return products;
}
int main(){
    int n;
    std::cout<<"ENTER THE DIGIT: ";
    std::cin>>n;
    int product = findProductOfDigits(n);
    std::cout<<"Product: "<<product;
}

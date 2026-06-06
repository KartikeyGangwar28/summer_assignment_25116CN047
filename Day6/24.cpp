#include <iostream>
int findPower(int x,int n){
    int temp=x;
    if(n==0&&x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    
    while(n!=1){
        n--;
        x*=temp;
    }
    return x;
}
int main(){
    int a,b;
    std::cout<<"ENTER THE DIGIT: ";
    std::cin>>a;
    std::cout<<"ENTER THE POWER: ";
    std::cin>>b;
    std::cout<<findPower(a,b);
}

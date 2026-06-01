#include <iostream>
using namespace std;
int calculateSum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){ 
         sum+=i;
    }
    return sum;
}
int calculateSumUsingRecursion(int n){
    if(n==0){
        return 0;
    }
    return n+calculateSumUsingRecursion(n-1);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER UPTO WHICH U WANT TO ADD: ";
    std::cin>>n;
    int sum =calculateSum(n);
    std::cout<<sum;
    std::cout<<"\nUSING RECURSION: "<<calculateSumUsingRecursion(n);
}
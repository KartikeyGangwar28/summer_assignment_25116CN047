#include <iostream>
using namespace std;
int reverseNum(int n){
    if(n<=9){
        return n;
    }
    int temp=0;
    int reverse=0;
    while(n!=0){
        temp = n%10;
        reverse=reverse*10+temp;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter the number you want to reverse: ";
    cin>>n;
    cout<<"\nREVERSED: "<<reverseNum(n);
}

#include <iostream>
using namespace std;
long long int reverseNum(int n){
    int store=0;
   long long int reverse=0;
    while(n!=0){
        store = n%10;
        reverse=reverse*10+store;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter the number you want to reverse: ";
    cin>>n;
    long long int reversed=reverseNum(n);//using long long to prevent overflow at int max and min values;
    cout<<"\nREVERSED: "<<reversed;
}

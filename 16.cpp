#include <iostream>
#include <cmath>
using namespace std;
int checkDigits(int n){
    int digits=0;
    if(n==0){
        return 1;
    }
    while(n!=0){
        digits++;
        n/=10;
    }
    return digits;
}
bool CheckArmstrong(int n){
  int store=0;
  int powSum=0;
  int temp=n;
  int digits=checkDigits(n);
  while(temp!=0){
    store=temp%10;
    powSum+=(int)pow(store,digits);
    temp/=10;
  }
  return powSum==n;
}
int main(){
    int a,b;
    cout<<"ENTER THE STARTING POINT OF RANGE: ";
    cin>>a;
    cout<<"ENTER THE ENDING POINT OF RANGE: ";
    cin>>b;
    if(a<0&&b<0){
        cout<<"NEGATIVE INTEGERS CAN'T BE TERMED AS ARMSTRONG NUMBERS AS PER MATHEMATICAL STANDARDS ";
        return 0;
    }
     else if(a==0&&b==0){
        cout<<"armstrong numbers in range: "<<0;
        return 0;
    }
    cout<<"ARMSTRONG NUMBERS BETWEEN "<<a<<" AND "<<b<<" ARE: ";
    if(a<0){
        a=0; //adding this loop since negative integers can't be armstrong so the loop should run from 0 to b;
    }
    for(int i=a;i<=b;i++){
        if(CheckArmstrong(i)){
            cout<<i<<" ";
        }
    }
    
}
#include <iostream>
#include <deque>
using namespace std;
deque<int> convertDecimalIntoBinary(int n){
  deque<int>d;
  if(n==0||n==1){
   d.push_back(n) ;
   return d;
    }
  int rem=0;
 // int store=0;
  while(n!=0||n==1){
    rem = n%2;
    d.push_front(rem);
    n=n/2;
    if(n==0||n==1){
         d.push_front(n);
         return d;
    }
  }
  return d;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER IS DECIMAL: ";
    std::cin>>n;
deque<int>d = convertDecimalIntoBinary(n);
for(auto itt:d){
    std::cout<<itt;
// cout<<7/2;
// cout<<7%2;
}
}

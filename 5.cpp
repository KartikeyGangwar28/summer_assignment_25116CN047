#include <iostream>
using namespace std;
 int findSum( long long int n ){
  int sum=0;
   int rem =0;
 while(n!=0){
    rem = n%10;
    sum+=rem;
    n/=10;

 }
 return sum;
}
int main(){
    long long int n;
     cout<<"ENTER THE NUMBER: ";
     cin>>n;
     cout<<"SUM OF DIGITS OF GIVEN INTEGER IS: "<<findSum(n);
}
#include <iostream>
using namespace std;
long long int findFactorial(int n){
    if (n==0||n==1){
        return 1;
    }
    long long int factorial =1;
   while(n>0){
    factorial*=n;
    n-=1;
   }
   return factorial;
}
long long int findFactorialUsingRecursion(int n){

    if (n==0||n==1){
        return 1;
    }
    return n*findFactorialUsingRecursion(n-1);
} //try to solve it by backtracking too;
int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    if(n<0){
        std::cout<<"FACTORIAL OF NEGATIVE INTEGERS DOES NOT EXIST";
        return 0;
    }
 long long int factorial = findFactorial(n);
  std::cout<<factorial;
  long long int factRecursion = findFactorialUsingRecursion(n);
  std::cout<<"\n"<<factRecursion;
}
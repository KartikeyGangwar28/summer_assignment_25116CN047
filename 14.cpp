#include <iostream>
int findNthFibonacciTerm(int n){
    int a=0,b=1;
    int temp =0;
    while(n--){
      temp = a+b;
      a=b;
      b=temp;
    
    }
   return a;
}


int main(){
   int n;
   std::cout<<"ENTER THE nth Term of Fibonacci Sequence that you want to print: ";
   std::cin>>n;
   int nthTerm=findNthFibonacciTerm(n);
   std::cout<<n<<" th term of fibonacci sequence starting with 1 is: "<<nthTerm;
  
}
#include <iostream>
unsigned long long int recursiveFactorial(int n){
  if(n==0||n==1){
    return 1;
  }
  return n*recursiveFactorial(n-1);
}
int main(){
    int n;
    std::cout<<"ENTER THE INTEGER: ";
    std::cin>>n;
    if(n<0){
      std::cout<<"FACTORIAL OF NEGATIVE INTEGRES D.N.E AS PER MATHEMATICAL STANDARDS";
      return 0;
    }
   unsigned long int factorial=recursiveFactorial(n);
    std::cout<<"Factorial of "<<n<<" is: "<<factorial;
}

#include <iostream>
int findSum(int *a,int *b){
          int sum = *a+*b;
          return sum;
}
 int main(){
         int a,b;
         std::cout<<"ENTER THE NUMBERS: ";
         std::cin>>a>>b;
         int sum = findSum(&a,&b);
         std::cout<<sum;
} 
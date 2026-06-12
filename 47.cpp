#include <iostream>
void printFibonacci(int n){ //here n is the number of terms upto which i want to print the series
int a=0;
int b=1;
int temp=0;
if(n==0){
   std::cout<<"0 terms series cannot exist logically";
}
if(n<0){
    std::cout<<"NEGATIVE TERM SERIES CAN'T EXIST LOGICALLY";
}
while(n!=0){
    std::cout<<a<<" ";
    temp = a+b;
    a=b;
    b = temp;
    n--;
    
} 
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER OF TERMS U WANT TO PRINT IN FIBONACCI SERIES: ";
    std::cin>>n;
    std::cout<<"FIBONACCI SERIES: ";
    printFibonacci(n);
}
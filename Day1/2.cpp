#include <iostream>
void printMultiplicationTable(int n){
    int temp =1;
    while(temp<=10){
    std::cout<<n<<"X"<<temp<<" = "<<n*temp<<"\n";
    temp+=1;
    }
}
int main(){
  int n;
  std::cout<<"ENTER THE NUMBER YOU WANT TO PRINT TABLE OF: ";
  std::cin>>n;
  printMultiplicationTable(n);
}

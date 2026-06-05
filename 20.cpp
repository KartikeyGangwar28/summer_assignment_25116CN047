#include <iostream>
bool checkPrime(int n){
for(int i=2;i<n;i++){
  if(n%i==0){
    return false;
  }
}
return true;
}
int findLargestPrimeFactor(int n){
     int largest=1;
  for(int i=1;i<=n/2;i++){
 
    if(n%i==0&&checkPrime(i)){
      largest=i;
    }
  }
 return largest;
}


int main(){
  int n;
  std::cout<<"ENTER THE NUMBER: ";
  std::cin>>n;
  if(n==0||n==1){
    std::cout<<n<<" is neither prime nor composite and hsa no factos other than itself";
  return 0;
  }
 int largest= findLargestPrimeFactor(n);
 std::cout<<"largest prime factor of "<<n<<" is: "<<largest;
}

#include <iostream>
bool checkPerfectNumber(int n){
    int sum=0;
    if(n<=0){
        return false; 
    }
for(int i=1;i<=n/2;i++){ 
    if(n%i==0){
        sum+=i;
    }
}
return n==sum;
}
int main(){
    int n;
    std::cout<<"CHECK NUMBER: ";
    std::cin>>n;

bool result=checkPerfectNumber(n);
if(!result){
    std::cout<<n<<" is not a perfect number";
}
else{
    std::cout<<n<<" is a perfect number";
}
}

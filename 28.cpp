#include <iostream>
int function(int rev,int n){
    rev=(rev*10)+(n%10);
    n=n/10;
if(n==0){
        return rev;
    }
    return function(rev,n);

    
}
int main(){
std::cout<<function(0,12344);
}
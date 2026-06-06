#include <iostream>
#include <deque>
std::deque<int> numToBits(int n){
    int temp=0;
    std::deque<int>a;
while(n!=1){
temp=n%2;
a.push_front(temp);
n/=2;
if(n==1||n==0){
    a.push_front(n);
    return a;
}
}
return a;
}
int main(){
    int n;
    std::cout<<"ENTER THE NUMBER IN DECIMALS: ";
    std::cin>>n;
    std::deque<int> a=numToBits(n);
    int setBits=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            setBits++;
        }
    }
    std::cout<<setBits;
}

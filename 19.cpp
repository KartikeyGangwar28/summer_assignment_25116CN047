#include <iostream>
using namespace std;
void printFactors(int n){
    cout<<"FACTORS OF "<<n<<" ARE: ";
for(int i=1;i<=n/2;i++){
    if(n%i==0){
        std::cout<<i<<" ";
    }
}
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    if(n==0){
            cout<<"FACTORS OF "<<n<<" ARE: "<<0;
             return 0;
    }
    printFactors(n);
}
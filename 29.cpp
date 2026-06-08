#include <iostream>
int main(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}
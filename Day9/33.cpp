#include <iostream>
int main(){
    for(int i=0;i<=5;i++){
        for(int j=5;j>i;j--){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

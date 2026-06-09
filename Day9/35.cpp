#include <iostream>
int main(){
    for(int i=65;i<=69;i++){
        for(char j=65;j<=i;j++){
            std::cout<<(char)i;
        }
        std::cout<<"\n";
    }
}

#include <iostream>
int main(){
    for(char i=char(65);i<=char(69);i++){
        for(char j=char(65);j<=i;j++){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
    // for(char i='A';i<='E';i++){
    //     for(char j='A';j<=i;j++){
    //         std::cout<<j;
    //     }
    //     std::cout<<"\n";
    // }
}

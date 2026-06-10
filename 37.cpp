#include <iostream>
int main(){
    int s=4,r=1,p=1;
    while(s!=0){
        for(int i=0;i<s;i++){
            std::cout<<" ";
        }
        for(int i=0;i<p;i++){
            std::cout<<"*";
        }
        std::cout<<"\n";
        s--;
        p+=2;
        r++;
    }


}
    
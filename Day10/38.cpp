#include <iostream>
int main(){
    int s=0,r=1,p=9;
    while(p>0){
        for(int i=0;i<s;i++){
            std::cout<<" ";
        }
        for(int i=0;i<p;i++){
            std::cout<<"*";
        }
        std::cout<<"\n";
        s++;
        p-=2;
        r++;
    }


}
    

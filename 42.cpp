#include <iostream>
int findMax(int a,int b,int c){
        
          int max= (a>b)?a:(b>c)?b:c;
          return max;
}
 int main(){
         int a,b,c;
         std::cout<<"ENTER THE NUMBERS: ";
         std::cin>>a>>b>>c;
         int maximum = findMax(a,b,c);
         std::cout<<"MAXIMUM NUMBER IS : "<<maximum;
} 
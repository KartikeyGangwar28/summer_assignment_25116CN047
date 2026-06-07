#include <iostream>
 using namespace std;
int function(int sum,int n){
      sum+=n%10;
      n=n/10;
    //cout<<sum<<" "<<n<<endl;
   if(n==0){
    return sum;
   }
 
   return function(sum,n);
    
   
   

}
 int main(){
       int sum= function(0,2234);
       cout<<sum;
       
} 

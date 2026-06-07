#include <iostream>
 using namespace std;
int sumOfDigits(int sum,int n){
      sum+=n%10;
      n=n/10;
    //cout<<sum<<" "<<n<<endl;
   if(n==0){
    return sum;
   }
 
   return sumOfDigits(sum,n);
    
   
   

}
 int main(){
       int n;
  std::cout<<"ENTER THE NUMBER WHOSE DIGITS U WANT TO SUM UP: ";
  std::cin>>n;
       int sum= sumOfDigits(0,n);
       cout<<"Sum of digits of "<< n <<" is: "<<sum;
       
} 

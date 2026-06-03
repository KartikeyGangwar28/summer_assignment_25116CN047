#include <iostream>
using namespace std;
/* int findGCD(int a,int b){
//   int smallest =a;
//    if(a==0&&b==0){
//     return 0;
//   }
//   else if(a==0&&b!=0){
//     return b;
//   }
//   else if(b==0&&a!=0){
//      return a;
//   }
//   if(b<a){
//     smallest=b;
//   }
//   int gcd=1;
//   for(int i=1;i<=smallest;i++){
//     if(a%i==0&&b%i==0){
//         gcd=i;
//     }
//               }
//               return gcd;
}
*/ 
int findGCD(int a,int b){
  if(a==0&&b==0){
    return 0;
  }
  int larger=b,smaller=a;  
  if(a>b){
    larger=a;
    smaller=b;
  }
if(a==0){
  return b;
}
else if(b==0){
  return a;
}
  int rem=1;
  while(rem!=0){
  rem=larger%smaller;
  if(rem==0){
    return smaller;
  }
  else if(rem==1){
    return 1;
  }
  larger=smaller;
  smaller=rem;
}
return rem;
}
int main(){
    int a,b;
    cout<<"ENTER THE NUMBERS: ";
    std::cin>>a>>b;
    int gcd=findGCD(a,b);
    if(gcd==0){
      std::cout<<"undefined or 0";
    }
    else{
    std::cout<<"\nGCD of "<<a<<" & "<<b<<" is: "<<gcd;
}
}
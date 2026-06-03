#include <iostream>
using namespace std;
int findLCM(int a,int b){
    if(a==0||b==0){
        return 0;
    }
int largest=b;
if(b<a){
largest=a;
}
int lcm =1;
for(int i=largest;i<=a*b;i++){
    if(i%a==0&&i%b==0){
        lcm=i;
        break;
    }
}
return lcm;
}
int main(){
    int a,b;
    cout<<"ENTER THE NUMBERS A AND B: ";
    cin>>a>>b;
    int lcm = findLCM(a,b);
    cout<<lcm; 
}
 

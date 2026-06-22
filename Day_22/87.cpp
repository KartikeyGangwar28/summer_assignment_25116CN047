#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
 string s;
 cout<<"ENTER THE STRING: ";
getline(cin,s);
int hash[10000];
for(int i=0;i<s.size();i++){
    hash[s[i]]++;
}
int q;
cout<<"ENTER THE NUMBER OF CHARACTERS U WANT TO GET FREQUENCY OF: ";
cin>>q;
while(q--){
char n;
cout<<"ENTER THE CHARACTER: ";
cin>>n;
cout<<"FREQUENCY OF CHARACTER "<<n<<" in entered string is: "<<hash[n]<<endl;
}
}
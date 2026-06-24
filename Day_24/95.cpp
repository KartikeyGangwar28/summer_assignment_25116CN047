#include <iostream>
#include <string>
using namespace std;
void longestWord(string&s){
   int count=0,max=0,initial=0,store=0;
   for(int i=0;i<s.length();i++){
    if(isalpha(s[i])){
        count++;
    }
   
    if(count>max){
        initial=i-count+1;
        max=count;
        store=i;
    }
     if(!isalpha(s[i])){
        count=0;
    }
   }
   cout<<"LONGEST WORD IN THE ENTERED STRING IS: ";
   for(int i=initial;i<=store;i++){
    cout<<s[i];
   }
}
int main(){
    string s;
   getline(cin>>ws,s);
   longestWord(s);

}

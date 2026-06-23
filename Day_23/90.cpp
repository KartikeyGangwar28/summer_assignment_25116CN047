#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;
int main(){
   string s;
   cout<<"ENTER S: ";
   getline(cin,s);
 unordered_map<char,int>m;
   for(int i=0;i<s.size();i++){
   m[s[i]]++;
}
for(int i=0;i<s.size();i++){
    if(m[s[i]]>1){
        cout<<"FIRST REPEATING CHARACTER IS: "<<s[i];
        return 0;
    }
}
cout<<"no repeating character";
}
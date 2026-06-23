#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int findNonRepeatingCharacter(string&s){
 unordered_map<char,int>m;
   for(int i=0;i<s.size();i++){
   m[s[i]]++;
}
for(int i=0;i<s.size();i++){
    if(m[s[i]]==1){
        cout<<"FIRST NON REPEATING CHARACTER IS: "<<s[i]<<endl;
        return 0;
    }
}
cout<<"no non repeating character";
return 0;
}
int main(){
   string s;
   cout<<"ENTER S: ";
   getline(cin,s);
   findNonRepeatingCharacter(s);
 
}
#include <iostream>
#include <string>
#include <unordered_map>
 using namespace std;
 int main(){
          string s1;
          cout<<"ENTER THE FIRST STRING: ";
          getline(cin,s1);
          string s2;
          cout<<"ENTER THE SECOND STRING: ";
          getline(cin,s2);
          if(s1.size()!=s2.size()){
            cout<<"STRINGS ARE NOT ANAGRAM IN NATURE";
            return 0;
          }
          
unordered_map<char,int>m1;
unordered_map<char,int>m2;
for(int i=0;i<s1.size();i++){
    m1[s1[i]]++;
}
for(int i=0;i<s2.size();i++){
    m2[s2[i]]++;
}
int commonSize=s1.size();
for(int i=0;i<commonSize;i++){ //size is common for both so i am taking for m1 only
    if(m1[s1[i]]!=m2[s2[i]]){
        cout<<"NOT ANAGRAM";
        return 0;
    }
}
cout<<"both strings ara anagram in nature";

} 
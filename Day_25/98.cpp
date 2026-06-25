#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void findCommonCharacters(string &s1,string&s2){
    string common;
      int smaller=min(s1.size(),s2.size());
for(int i=0;i<smaller;i++){
    for(int j=0;j<smaller;j++){
        if(s1[i]==s2[j]){
            if(common.find(s1[i])==string::npos){
                common.push_back(s1[i]);
            }
        }
    }
}
cout<<"COMMON CHARACTERS FROM BOTH STRINGS ARE: ";
for(int i=0;i<common.size();i++){
    cout<<common[i];
}
   
}
 
int main(){
    string s1,s2;
    cout<<"ENTER FIRST STRING: ";
   getline(cin>>ws,s1);
   cout<<"ENTER SECOND  STRINNG: ";
      getline(cin>>ws,s2);
      findCommonCharacters(s1,s2);
}
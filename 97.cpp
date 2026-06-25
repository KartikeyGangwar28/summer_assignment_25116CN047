#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string s1,s2;
    cout<<"ENTER FIRST SORTED STRING: ";
   getline(cin>>ws,s1);
   cout<<"ENTER SECOND SORTED STRINNG: ";
      getline(cin>>ws,s2);
set<char>s;
for(int i=0;i<s1.size();i++){
    s.emplace(s1[i]);
}
for(int i=0;i<s2.size();i++){
    s.emplace(s2[i]);
}
cout<<"AFTER MERGING: ";
for(auto it:s){
    cout<<it;
}
   
}
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
   string s;
   cout<<"ENTER S: ";
   getline(cin,s);
  unordered_map<char,int>m;
   for(int i=0;i<s.size();i++){
   m[s[i]]++;
}
char largest=s[0];
int l=1;
for(int i=0;i<s.size();i++){
    if(m[s[i]]>l){
   largest=s[i];  
   l=m[s[i]];
  }
}
if (l==1)
{
    cout<<"all elements have same frequency";
    return 0;
}

cout<<"MAX FREQUENCY OR MAX OCCURING CHARACTER IS: "<<largest;
}
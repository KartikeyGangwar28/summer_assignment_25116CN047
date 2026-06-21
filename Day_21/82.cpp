#include <iostream>
#include <string>

using namespace std;
void reverseString(string &s){
int k = s.size()-1;
       char temp;
       for(int i=0;i<s.size()/2;i++){
         temp=s[i];
         s[i]=s[k];
         s[k]=temp;
         k--;
       }
}
 int main(){
       string s;
       cout<<"ENTER THE CHARACTERS OF STRING: ";
       getline(cin,s);

       reverseString(s);
       for(int i=0;i<s.size();i++){
        cout<<s[i];
       }
 }
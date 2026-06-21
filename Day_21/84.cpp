#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void printInUpperCase(string &s){
for(int i=0;i<s.size();i++){
        if (isalpha(s[i])){
              s[i]=toupper(s[i]);
        }
       }
       for(int i=0;i<s.size();i++){
        cout<<s[i];
       }

}
int main(){
       string s;
       cout<<"ENTER THE CHARACTERS OF STRING: ";
       getline(cin,s);
       printInUpperCase(s);       
}
